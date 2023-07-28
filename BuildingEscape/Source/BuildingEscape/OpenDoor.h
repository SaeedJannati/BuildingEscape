// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UOpenDoor();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void Initialise();
	bool IsInDoorOpenDelay();
	void CheckForDoorRotation(float deltaTime);
	void CheckForDoorCompletelyOpen(bool isOpening, bool rotDone);

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	float openDelay{3.f};
	UPROPERTY(EditAnywhere)
	float openDoorDeltaYaw{90.0f};
	UPROPERTY(EditAnywhere)
	float doorCloseLerpFactor{2.f};
	UPROPERTY(EditAnywhere)
	float doorOpenLerpFactor{2.f};
	UPROPERTY(EditAnywhere)
	ATriggerVolume* pressurePlate;
	UPROPERTY(EditAnywhere)
	float minimumMassToTrigger{15.f};
	float lastOpenTime{0.f};
	float currentYaw{0.f};
	float initYaw{0.f};
	AActor* owner{nullptr};
	FRotator currentRotator{};

	UWorld* world{nullptr};
	bool isDoorOpen{false};
	bool IsDoorOpenerInsideTriggerZone() const;
	bool CheckForOverlappingActors() const;
	float CalcTotalMapInPressurePlate() const;

	bool RotateDoor(float deltaTime, float aTargetYaw, float lerpFactor);

	float GetTargetYaw(bool isPressurePlateTriggered);
	float GetCurrentTime();
};
