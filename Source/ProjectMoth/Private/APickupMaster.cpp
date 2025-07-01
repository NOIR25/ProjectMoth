// Fill out your copyright notice in the Description page of Project Settings.


#include "APickupMaster.h"

#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AAPickupMaster::AAPickupMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	
	PickupSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMesh");
	PickupSkeletalMesh->SetupAttachment(Root);
	
	PickupStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	PickupStaticMesh->SetupAttachment(Root);
	
	OverlapComponent = CreateDefaultSubobject<USphereComponent>("OverlapComponent");
	OverlapComponent->SetupAttachment(Root);
	

}

// Called when the game starts or when spawned
void AAPickupMaster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPickupMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAPickupMaster::CallPickup_Implementation()
{
	
}

