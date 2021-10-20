// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"


UCLASS()
class UNREALASTEROIDS_CPP_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	ABullet(const FObjectInitializer& ObjectInitializer);

	// Sphere collision component
	USphereComponent* CollisionComp;
	// Projectile movement component
	UProjectileMovementComponent* ProjectileMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
