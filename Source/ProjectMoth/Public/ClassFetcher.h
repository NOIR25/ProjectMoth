// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ClassFetcher.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UClassFetcher : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTMOTH_API IClassFetcher
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.

public:
	
UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "HelperFunctions")
	void GetMyPlayerClass(ACharacter*& MyPlayer);


};
