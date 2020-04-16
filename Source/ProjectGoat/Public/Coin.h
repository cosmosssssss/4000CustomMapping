// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Coin.generated.h"

UCLASS()
class PROJECTGOAT_API ACoin : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoin();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* VisualMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USphereComponent* sphere;
	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USphereComponent* CollisionSphere;*/
		//UFUNCTION()
		//void OnHit(class UPrimitiveComponent* OverLapComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION()
	//void OnDelegateExampleOverlap();
	void collect(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};