// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodPlankton.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFoodPlankton::AFoodPlankton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PlanktonCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DebrisCapsule"));
    PlanktonCapsule->InitCapsuleSize(30.f, 60.f);
    RootComponent = PlanktonCapsule;

    PlanktonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DebrisMesh"));
    PlanktonMesh->SetupAttachment(PlanktonCapsule);

}

// Called when the game starts or when spawned
void AFoodPlankton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFoodPlankton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

