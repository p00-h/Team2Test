// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KWJActor.generated.h"

UCLASS()
class TEAM02_API AKWJActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AKWJActor();

	void BeginPlay() override;
};
