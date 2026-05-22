// Author: Universidad de Burgos
// Date: 11/11/2024
// Get Unix timestamp with milliseconds (headers).

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Utilidades.generated.h"

/**
 * 
 */
UCLASS()
class XRAILAB_API UUtilidades : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    static int64 GetCustomUnixTime();
    UFUNCTION(BlueprintPure, Category = "Email")
    static FString GetAndroidGamePath();
	};