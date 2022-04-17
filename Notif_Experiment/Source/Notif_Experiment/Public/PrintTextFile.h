// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PrintTextFile.generated.h"

/**
 * 
 */
UCLASS()
class NOTIF_EXPERIMENT_API UPrintTextFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
		static bool SaveTextFile(FString SaveDirectory, FString FileName, FString SaveText, bool AllowOverwrite);
	
};
