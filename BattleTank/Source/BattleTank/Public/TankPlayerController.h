// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ATank* GetControlledTank() const;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// aims the barrel to the crosshair
	void AimTowardsCrosshair();

	// return an OUT parametre, true if it hits landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;
};
