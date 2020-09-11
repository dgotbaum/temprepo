// Copyright (c) 2017-2019 Samuel Kahn (samuel@kahncode.com). All Rights Reserved.

#include "GitSourceControlStatusFile.h"

#include "GitSourceControlModule.h"
#include "GitSourceControlProvider.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

//TODO : investigate moving this into a dedicated folder within .git, would be more transparent to the user
static const TCHAR* GitStatusFileName = TEXT(".gitcentral");

FGitSourceControlStatusFile::FGitSourceControlStatusFile()
{
	bDirty = false;
}

FGitSourceControlStatusFile::~FGitSourceControlStatusFile()
{
	//The file has been saved for every change so no need to save here
}

void FGitSourceControlStatusFile::CacheStates()
{
	CachedStates = SavedStates;
}

void FGitSourceControlStatusFile::ClearCache()
{
	CachedStates.Reset();
}

void FGitSourceControlStatusFile::ClearSavedStates()
{
	SavedStates.Reset();
}

void FGitSourceControlStatusFile::RestoreCachedStates()
{
	SavedStates = CachedStates;
}

const SavedState& FGitSourceControlStatusFile::GetState(const FString& InFilePath) const
{
	auto State = SavedStates.Find(InFilePath);
	if(State)
		return *State;
	else	
	{
		static SavedState defaultState;
		return defaultState;
	}
}

bool FGitSourceControlStatusFile::SetState(const FString& InFilePath, const SavedState& InState, const FString& PathToRepositoryRoot, bool bDoNotSave /*= false*/)
{
	bool bWasDirty = bDirty;
	bDirty = true;

	auto State = SavedStates.Find(InFilePath);
	if(State)
	{
		SavedState OldState = InState;
		*State = InState;
		if(bDoNotSave || Save(PathToRepositoryRoot))
		{
			return true;
		}
		else
		{
			*State = OldState;
		}
	}
	else
	{
		SavedStates.Add(InFilePath, InState);
		if(bDoNotSave || Save(PathToRepositoryRoot))
		{
			return true;
		}
		else
		{
			SavedStates.Remove(InFilePath);
		}
	}

	bDirty = bWasDirty;
	return false;
}

bool FGitSourceControlStatusFile::ClearState(const FString& InFilePath, const FString& PathToRepositoryRoot, bool bDoNotSave /*= false*/)
{
	bool bWasDirty = bDirty;
	bDirty = true;

	bool bFound = SavedStates.Remove(InFilePath) != 0;
	if(bFound)
	{
		if(bDoNotSave || Save(PathToRepositoryRoot))
		{
			return true;
		}
	}

	bDirty = bWasDirty;
	return false;
}

bool FGitSourceControlStatusFile::Save(const FString& PathToRepositoryRoot)
{
	if(!bDirty)
		return true;

	FGitSourceControlProvider& GitSourceControl = FGitSourceControlModule::GetInstance().GetProvider();

	FString Key = GitSourceControl.GetRemote();
	Key += "/";
	Key += GitSourceControl.GetBranch();

	if(SavedStates.Num() > 0)
	{
		//Save all states
		TSharedPtr<FJsonObject> JsonStatesMap = MakeShared<FJsonObject>();

		FString FixedPathToRepoRoot(PathToRepositoryRoot);
		if(!FixedPathToRepoRoot.EndsWith("/"))
			FixedPathToRepoRoot += '/';

		for(auto& It : SavedStates)
		{
			if(!It.Value.IsValid())
				continue;

			FString RelativePath(*It.Key);
			FPaths::MakePathRelativeTo(RelativePath, *FixedPathToRepoRoot);

			JsonStatesMap->SetObjectField(RelativePath, It.Value.ToJSon());
		}

		//Preserve or allocate LoadedData
		if(!LoadedData.IsValid())
			LoadedData = MakeShared<FJsonObject>();

		if(JsonStatesMap->Values.Num() > 0)
			LoadedData->SetObjectField(Key, JsonStatesMap);
		else
			LoadedData->RemoveField(Key);
	}
	else if(LoadedData.IsValid())
	{
		LoadedData->RemoveField(Key);
	}

	//Write json file
	const FString StatusFilePath = FPaths::Combine(PathToRepositoryRoot, GitStatusFileName);

	FString FileContents;

	TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&FileContents);
	if(!FJsonSerializer::Serialize(LoadedData.ToSharedRef(), Writer))
	{
		return false;
	}

	if(!FFileHelper::SaveStringToFile(FileContents, *StatusFilePath))
	{
		GITCENTRAL_ERROR(TEXT("GitCentral could not write to configuration file (%s)"), *StatusFilePath);
		return false;
	}

	bDirty = false;
	ClearCache();
	return true;
}

bool FGitSourceControlStatusFile::Load(const FString& PathToRepositoryRoot)
{
	const FString StatusFilePath = FPaths::Combine(PathToRepositoryRoot, GitStatusFileName);

	FString FileContents;

	if(!FFileHelper::LoadFileToString(FileContents, *StatusFilePath))
	{
		return false;
	}

	LoadedData.Reset();
	SavedStates.Reset();

	if(FileContents.IsEmpty())
	{
		bDirty = false;
		ClearCache();
		return true;
	}

	TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create(FileContents);
	if(!FJsonSerializer::Deserialize(Reader, LoadedData) || !LoadedData.IsValid())
	{
		GITCENTRAL_ERROR(TEXT("GitCentral config file is not a valid JSON file (%s)"), *StatusFilePath);
		return false;
	}

	FGitSourceControlProvider& GitSourceControl = FGitSourceControlModule::GetInstance().GetProvider();

	FString Key = GitSourceControl.GetRemote();
	Key += "/";
	Key += GitSourceControl.GetBranch();

	const TSharedPtr<FJsonObject>* JsonStatesMap = nullptr;
	if(!LoadedData->TryGetObjectField(Key, JsonStatesMap))
	{
		//No states were saved for this remote/branch
		bDirty = false;
		ClearCache();
		return true;
	}

	for(auto It : (*JsonStatesMap)->Values)
	{
		SavedState State;
		if(State.FromJson(It.Value->AsObject()))
		{
			FString FilePath(It.Key);
			FilePath = FPaths::ConvertRelativePathToFull(PathToRepositoryRoot, FilePath);

			SavedStates.Add(FilePath, State);
		}
	}

	bDirty = false;
	ClearCache();
	return true;
}
