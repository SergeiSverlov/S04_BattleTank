// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void Elevate(float DegreesPerSecond);

private:
	UPROPERTY(EditAnywhere)
	float MaxDegreesPerSecond = 5.0;

	UPROPERTY(EditAnywhere)
	float MaxElevationDegrees = 40.0; 

	UPROPERTY(EditAnywhere)
	float MinElevationDegrees = 7.0; 
};
