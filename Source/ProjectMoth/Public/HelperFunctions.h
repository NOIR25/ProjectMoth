// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClassFetcher.h"
#include "HelperFunctions.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMOTH_API UHelperFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
	
	UFUNCTION(BlueprintCallable, Category = "GHelperFunctions")
	void FL_GetPlayerClass(int PlayerIndex, ACharacter*& MyPlayer);
};
