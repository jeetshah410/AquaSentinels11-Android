// Fill out your copyright notice in the Description page of Project Settings.


#include "Debris.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "OceanFrontiersCharacter.h"


// Sets default values
ADebris::ADebris()
{
    DebrisCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DebrisCapsule"));
    DebrisCapsule->InitCapsuleSize(30.f, 60.f);  
    RootComponent = DebrisCapsule;

    DebrisMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DebrisMesh"));
    DebrisMesh->SetupAttachment(DebrisCapsule);

    DeathMessages.Add(TEXT("Oh no! The debris was too toxic."));
    DeathMessages.Add(TEXT("You should have avoided that plastic bottle!"));
    DeathMessages.Add(TEXT("The ocean pollution got you this time."));
    DeathMessages.Add(TEXT("You were caught in the debris trap!"));
    DeathMessages.Add(TEXT("Game over! The debris has taken its toll."));

}

// Called when the game starts or when spawned
void ADebris::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADebris::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADebris::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    
}

FString ADebris::GetRandomDeathMessage()
{
    int32 RandomIndex = FMath::RandRange(0, DeathMessages.Num() - 1);  
    return DeathMessages[RandomIndex];
}


