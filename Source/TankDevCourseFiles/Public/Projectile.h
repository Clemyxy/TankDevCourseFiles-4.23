// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Projectile.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;
UCLASS()
class TANKDEVCOURSEFILES_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void LaunchProjectile(float Speed);
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)
		UStaticMeshComponent* CollisionMesh = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)
		UParticleSystemComponent* LaunchBlast = nullptr;

private:
	UProjectileMovementComponent* ProjectileMovement = nullptr;
	
};
