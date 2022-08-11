// Fill out your copyright notice in the Description page of Project Settings.


#include "Exorcist.h"

// Sets default values
AExorcist::AExorcist()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExorcist::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExorcist::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AExorcist::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

