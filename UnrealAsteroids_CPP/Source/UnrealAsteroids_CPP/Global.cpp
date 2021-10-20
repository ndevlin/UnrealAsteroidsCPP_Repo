// Fill out your copyright notice in the Description page of Project Settings.


#include "Global.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGlobal::AGlobal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UBlueprint> Asteroid(TEXT("Blueprint'/Game/AsteroidBP.AsteroidBP'"));
	if (Asteroid.Object) 
	{
		AsteroidClass = (UClass*)Asteroid.Object->GeneratedClass;
	}
}

// Called when the game starts or when spawned
void AGlobal::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(timerHandle, this, &AGlobal::SpawnAsteroids, 2.0f, true);
	Score = 0;
	
}

// Called every frame
void AGlobal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGlobal::SpawnAsteroids() 
{
	const FVector2D ViewportSize = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());
	UWorld* const World = GetWorld();
	if (World) 
	{
		for (int i = 0; i < 3; i++) 
		{
			float random1 = (float)rand() / RAND_MAX;
			float random2 = (float)rand() / RAND_MAX;
			float xPos = ViewportSize[0] * (2 * random1 - 1);
			float yPos = ViewportSize[1] * (2 * random2 - 1);
			FVector worldLoc, worldDir;
			APlayerController* cam = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			cam->DeprojectScreenPositionToWorld(xPos, yPos, worldLoc, worldDir);
			FVector spawn = worldLoc + worldDir * (worldLoc.Z / 2);
			spawn.Z = 0;
			AAsteroid* roid = World->SpawnActor<AAsteroid>(AsteroidClass, FVector(spawn.X, spawn.Y, 0.0f), FRotator(0.f));
		}
	}
}
