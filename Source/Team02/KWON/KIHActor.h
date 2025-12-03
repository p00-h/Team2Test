// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "KIHActor.generated.h"

UCLASS()
class TEAM02_API AKIHActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKIHActor();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComp;

	void PrintHelloFromPJH();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
