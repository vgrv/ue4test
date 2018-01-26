// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Pickup.generated.h"
UCLASS()
class GAMEDESIGN1_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup(const class FObjectInitializer& ObjectInitializer);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Static mesh for a pickup
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere)
		USceneComponent* PickupRoot;

	UPROPERTY(EditAnywhere)
		UBoxComponent* PickupBox;

	UFUNCTION()
		void OnPlayerEnterPickupBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
			const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
