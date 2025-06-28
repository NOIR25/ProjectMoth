// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "APickupMaster.generated.h"

class USphereComponent;

UCLASS()
class PROJECTMOTH_API AAPickupMaster : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* Root;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USphereComponent* OverlapComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* PickupStaticMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* PickupSkeletalMesh;


private:
	
public:	
	// Sets default values for this actor's properties
	AAPickupMaster();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Can be overriden in BP - Can also be called in BP
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Overrides")
	void CallPickup();
};
