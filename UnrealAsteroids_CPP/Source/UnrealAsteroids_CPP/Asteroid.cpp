// Fill out your copyright notice in the Description page of Project Settings.


#include "Asteroid.h"

// Sets default values
AAsteroid::AAsteroid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Our root component will be a box that reacts to physics
	AsteroidBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
	RootComponent = AsteroidBoxComponent;
	AsteroidBoxComponent->InitBoxExtent(FVector(12.0f, 15.0f, 12.0f));
	AsteroidBoxComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	AsteroidBoxComponent->SetSimulatePhysics(true);
	AsteroidBoxComponent->SetEnableGravity(false);
	AsteroidBoxComponent->SetNotifyRigidBodyCollision(true);
}

// Called when the game starts or when spawned
void AAsteroid::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &AAsteroid::onHit);
	
}

// Called every frame
void AAsteroid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAsteroid::onHit(AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit){	if (OtherActor && (OtherActor != this) && OtherActor->IsA(ABullet::StaticClass()))
	{
		Destroy();
		OtherActor->Destroy();
	}}

