// Fill out your copyright notice in the Description page of Project Settings.


#include "PJHActor.h"
#include "../Team02/KWON/KIHActor.h"

APJHActor::APJHActor()
{

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    RootComponent = CollisionBox;
    CollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f)); 
    CollisionBox->SetCollisionProfileName(TEXT("Trigger")); 
}

void APJHActor::BeginPlay()
{
<<<<<<< HEAD
    Super::BeginPlay();

    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APJHActor::OnOverlapBegin);
=======
	
>>>>>>> 8a9755cf3f502dbf4452cc843709bf1232d90fac
}

void APJHActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
  
    if (OtherActor && (OtherActor != this))
    {

        AKIHActor* TargetKIH = Cast<AKIHActor>(OtherActor);

        if (TargetKIH)
        {

            UE_LOG(LogTemp, Warning, TEXT("PJH: KIH를 발견했다!"));
            TargetKIH->PrintHelloFromPJH();
        }
    }
}
