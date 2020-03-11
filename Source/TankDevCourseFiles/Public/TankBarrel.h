// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

//Hold Barrel's properties and methods
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANKDEVCOURSEFILES_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	
	void Elevate(float RelativeSpeed);

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float MaxDegreesPerSecond = 10.f;
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float MinElevationDegrees = 0.f;
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float MaxElevationDegrees = 40.f;
	
};
