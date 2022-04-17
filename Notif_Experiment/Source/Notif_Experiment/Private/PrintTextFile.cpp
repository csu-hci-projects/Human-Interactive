// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintTextFile.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UPrintTextFile::SaveTextFile(FString SaveDirectory, FString FileName, FString SaveText, bool AllowOverwrite = false) {

	SaveDirectory += "\\";
	SaveDirectory += FileName;

	if (!AllowOverwrite) {
		if(FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory)) {
			return false;
		}
	}

	return FFileHelper::SaveStringToFile(SaveText, *SaveDirectory);
}

