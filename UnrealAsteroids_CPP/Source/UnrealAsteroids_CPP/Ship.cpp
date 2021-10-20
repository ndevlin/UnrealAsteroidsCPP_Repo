// Fill out your copyright notice in the Description page of Project Settings.


#include "Ship.h"
#include "Components/InputComponent.h"


// Sets default values
AShip::AShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Set this pawn to be controlled by the lowest-numbered player
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	// Our root component will be a sphere that reacts to physics
	ShipSphereComponent =
		CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = ShipSphereComponent;
	ShipSphereComponent->InitSphereRadius(10.0f);
	ShipSphereComponent->SetCollisionProfileName(TEXT("Pawn"));
	ShipSphereComponent->SetSimulatePhysics(true);
	ShipSphereComponent->SetEnableGravity(false);
	ShipSphereComponent->SetLinearDamping(0.3);
	ShipSphereComponent->SetAngularDamping(1);
	ShipSphereComponent->SetConstraintMode(EDOFMode::XYPlane);

}

// Called when the game starts or when spawned
void AShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &AShip::Move_Forward);
	InputComponent->BindAxis("Turn", this, &AShip::Move_Turn);

}


void AShip::Move_Forward(float AxisValue)
{
	if (AxisValue > 0)
	{
		ShipSphereComponent->AddForce(GetActorForwardVector() * AxisValue * 600);
	}
}

void AShip::Move_Turn(float AxisValue)
{
	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += AxisValue * 2;
	SetActorRotation(NewRotation);
}

