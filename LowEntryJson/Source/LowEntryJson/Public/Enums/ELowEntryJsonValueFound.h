// Copyright Low Entry. All Rights Reserved.

#pragma once


#include "CoreMinimal.h"

#include "ELowEntryJsonValueFound.generated.h"


UENUM(BlueprintType)
enum class ELowEntryJsonValueFound : uint8
{
	Found = 0,
	NotFound = 1
};
