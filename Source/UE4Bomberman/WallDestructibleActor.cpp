// Fill out your copyright notice in the Description page of Project Settings.

#include "WallDestructibleActor.h"


// Sets default values
AWallDestructibleActor::AWallDestructibleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Wall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	this->SetRootComponent(Wall);
}

// Called when the game starts or when spawned
void AWallDestructibleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWallDestructibleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

