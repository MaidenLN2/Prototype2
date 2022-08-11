// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "GameFramework/Character.h"

// Sets default values
APickup::APickup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	MyMesh->SetSimulatePhysics(true);
	RootComponent = MyMesh;

	isHolding = false;
	isGravity = true;
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();

	Exorcist_BP = UGameplayStatics::GetPlayerCharacter(this, 0); // getting character
	PlayerCamera = Exorcist_BP->FindComponentByClass<UCameraComponent>(); // getting camera

	TArray<USceneComponent*> Components; // getting components for the object

	Exorcist_BP->GetComponents(Components); // getting them to appear on player character

	if (Components.Num() > 0)
	{
		for (auto& Comp : Components)
		{
			if (Comp->GetName() == "HoldingComponent")
			{
				HoldingComp = Cast<USceneComponent>(Comp);
			}
		}
	}
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isHolding && HoldingComp)
	{
		SetActorLocationAndRotation(HoldingComp->GetComponentLocation(), HoldingComp->GetComponentRotation());
	}
}

void APickup::RotateActor() // rotation function
{
	ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	SetActorRotation(FQuat(ControlRotation));
}

void APickup::Pickup() //pickup function using physical instances 
{
	isHolding = !isHolding;
	isGravity = !isGravity;
	MyMesh->SetEnableGravity(isGravity);
	MyMesh->SetSimulatePhysics(isHolding ? false : true);
	MyMesh->SetCollisionEnabled(isHolding ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);

	if (!isHolding)
	{
		ForwardVector = PlayerCamera->GetForwardVector();
		MyMesh->AddForce(ForwardVector * 100000 * MyMesh->GetMass());
	}