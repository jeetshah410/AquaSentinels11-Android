// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Debris.generated.h"

class UCapsuleComponent;

UCLASS()
class OCEANFRONTIERS_API ADebris : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADebris();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Debris")
	UCapsuleComponent* DebrisCapsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Debris")
	UStaticMeshComponent* DebrisMesh;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	TArray<FString> DeathMessages;

	FString GetRandomDeathMessage();

};
