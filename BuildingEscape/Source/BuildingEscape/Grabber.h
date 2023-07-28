// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BUILDINGESCAPE_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	void CheckForGrab();
	void CastForGrabbableObjects();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	void GetPlayerViewPoint();
	void DrawLineDebug();
	void Initialise();
	void OnRelease();
	void InitialiseInput();
	void OnGrab();
	void CheckForPhysicsHandleComponent();

private:
	UPROPERTY(EditAnywhere)
	float playerReach{100.f};
	UPROPERTY(EditAnywhere)
	FColor debugColour{255, 0, 0};

	FVector reachEnd{};
	FVector playerViewPortLocation{};
	FRotator playerViewPortRotation{};
	UWorld* world{};
	APlayerController* playerController{};
	FHitResult hitResult{};
    AActor* hitActor{};
	UPhysicsHandleComponent* physicsHandle{nullptr};
	UInputComponent* inputComponent{nullptr};
	bool isGrabbing{};
	bool hasSomethingGrabbed{};
};
