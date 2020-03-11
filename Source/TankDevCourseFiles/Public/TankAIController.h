// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAimingComponent.h"
#include "TankAIController.generated.h"


UCLASS()
class TANKDEVCOURSEFILES_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:

protected:

	//distance Tank - Joueur a atteindre
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float AcceptanceRadius = 8000;

private:

	void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

};