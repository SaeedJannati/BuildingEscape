// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoor.h"
#include "GameFramework/Actor.h"

#pragma region Constructor
// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
#pragma endregion

#pragma region unreal callbacks
// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	Initialise();
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CheckForDoorRotation(DeltaTime);
}
#pragma endregion

#pragma region methods
bool UOpenDoor::IsDoorOpenerInsideTriggerZone() const
{
	if (doorOpener == nullptr)
		return false;
	if (pressurePlate == nullptr)
		return false;
	if (!pressurePlate->IsOverlappingActor(doorOpener))
		return false;
	return true;
}

void UOpenDoor::Initialise()
{
	world = GetWorld();
	owner = GetOwner();
	currentYaw = owner->GetActorRotation().Yaw;
	initYaw = currentYaw;
	openDoorDeltaYaw += currentYaw;
	lastOpenTime = -2.0f * openDelay;
	GetPlayerActor();
}

bool UOpenDoor::IsInDoorOpenDelay()
{
	if (!isDoorOpen)
		return false;
	if (GetCurrentTime() - lastOpenTime > openDelay)
		return false;
	return true;
}

void UOpenDoor::GetPlayerActor()
{
	doorOpener = world->GetFirstPlayerController()->GetPawn();
}

void UOpenDoor::CheckForDoorRotation(float deltaTime)
{
	const auto isPressurePlateTriggered = IsDoorOpenerInsideTriggerZone();
	const auto destYaw = GetTargetYaw(isPressurePlateTriggered);
	const auto lerpFactor=isPressurePlateTriggered?doorOpenLerpFactor:doorCloseLerpFactor;
	if (!isPressurePlateTriggered)
		if (IsInDoorOpenDelay())
			return;
    const auto doorRotationDone = RotateDoor(deltaTime, destYaw,lerpFactor);
	if (!doorRotationDone)
		return;
	CheckForDoorCompletelyOpen(isPressurePlateTriggered, doorRotationDone);
}

void UOpenDoor::CheckForDoorCompletelyOpen(bool isOpening, bool rotDone)
{
	if (!rotDone)
		return;
	if (!isOpening)
		return;
	isDoorOpen = true;
	lastOpenTime = GetCurrentTime();
}

float UOpenDoor::GetTargetYaw(bool isPressurePlateTriggered)
{
	return isPressurePlateTriggered ? openDoorDeltaYaw : initYaw;
}

float UOpenDoor::GetCurrentTime()
{
	return world->GetTimeSeconds();
}

bool UOpenDoor::RotateDoor(float deltaTime, float aTargetYaw,float lerpFactor)
{
	if (FMath::Abs(currentYaw - aTargetYaw) < .05f)
	{
		return true;
	}
	currentYaw = FMath::FInterpTo(currentYaw, aTargetYaw, deltaTime, lerpFactor);
	currentRotator = owner->GetActorRotation();
	currentRotator.Yaw = currentYaw;
	owner->SetActorRotation(currentRotator);
	return false;
}
#pragma endregion
