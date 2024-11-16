// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoodPlankton.generated.h"

class UCapsuleComponent;

UCLASS()
class OCEANFRONTIERS_API AFoodPlankton : public AActor
{
	GENERATED_BODY()
	
public:	
	AFoodPlankton();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Plankton")
	UStaticMeshComponent* PlanktonMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Plankton")
	UCapsuleComponent* PlanktonCapsule;

};
