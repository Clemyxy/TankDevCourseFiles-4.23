// Fill out your copyright notice in the Description page of Project Settings.


#include "TankDevCourseFiles/Public/TankAIController.h"
#include "Engine/World.h"
#include "TankDevCourseFiles/Public/TankAimingComponent.h"
//Called once at the start
void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.bCanEverTick = true;
}

//Called every frame
void ATankAIController::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	auto ControlledTank = GetPawn();
	auto AimingComponent = GetPawn()->FindComponentByClass<UTankAimingComponent>();

	if (!ensure (PlayerTank && ControlledTank)) {return;}
	
		
		MoveToActor(PlayerTank, AcceptanceRadius);
		
		AimingComponent->AimAt(PlayerTank->GetActorLocation());

		//if aim or locked
		if(AimingComponent->GetFiringState() == EFiringState::Locked)
			AimingComponent->Fire();
	
}