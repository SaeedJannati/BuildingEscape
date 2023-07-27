// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"


#define OUT
#pragma region  Constructor
// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
#pragma  endregion
#pragma region Unreal callbacks

// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
	Initialise();
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CheckForGrab();
}
#pragma endregion
#pragma region methods
void UGrabber::GetPlayerViewPoint()
{
	playerController->GetPlayerViewPoint(OUT playerViewPortLocation,OUT playerViewPortRotation);
	debugLineEndPoint = playerViewPortLocation + playerReach * playerViewPortRotation.Vector();
}

void UGrabber::CheckForGrab()
{
	if (!isGrabbing)
		return;
	GetPlayerViewPoint();
	CastForGrabbableObjects();
}

void UGrabber::CastForGrabbableObjects()
{
	world->LineTraceSingleByObjectType(OUT hitResult, playerViewPortLocation,
	                                   debugLineEndPoint,
	                                   FCollisionObjectQueryParams(ECC_PhysicsBody));
	hitActor = hitResult.GetActor();
	if (hitActor == nullptr)
		return;

	UE_LOG(LogTemp, Warning, TEXT("CollidedWith:%s"), *(hitActor->GetName()));
}

void UGrabber::DrawLineDebug()
{
	DrawDebugLine(world, playerViewPortLocation, debugLineEndPoint, debugColour, false, 0, 0, 5.f);
}

void UGrabber::Initialise()
{
	world = GetWorld();
	playerController = world->GetFirstPlayerController();
	InitialiseInput();
	CheckForPhysicsHandleComponent();
}

void UGrabber::InitialiseInput()
{
	inputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (inputComponent == nullptr)
		return;
	inputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::OnGrab);
	inputComponent->BindAction("Grab", IE_Released, this, &UGrabber::OnRelease);
}

void UGrabber::OnRelease()
{
	isGrabbing = false;
	UE_LOG(LogTemp, Error, TEXT("OnRelease"));
}

void UGrabber::OnGrab()
{
	isGrabbing = true;
	UE_LOG(LogTemp, Error, TEXT("OnGrab"));
}

void UGrabber::CheckForPhysicsHandleComponent()
{
	physicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (physicsHandle != nullptr)
		return;
	UE_LOG(LogTemp, Error, TEXT("There is no physiscs handle component on object %s !"), *GetOwner()->GetName())
}

#pragma endregion
