// Fill out your copyright notice in the Description page of Project Settings.

#include "KWON/KIHActor.h"

// Sets default values
AKIHActor::AKIHActor()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void AKIHActor::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AKIHActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AKIHActor::PrintHelloFromPJH()
{

    UE_LOG(LogTemp, Warning, TEXT("KIH: PJH touched me!"));
}

