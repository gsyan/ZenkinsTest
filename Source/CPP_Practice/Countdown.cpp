// Fill out your copyright notice in the Description page of Project Settings.


#include "Countdown.h"

// Sets default values
ACountdown::ACountdown()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CountdownText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("CountdownNumber"));
	CountdownText->SetHorizontalAlignment(EHTA_Center);
	CountdownText->SetWorldSize(150.0f);
	FRotator NewRotator = FRotator(0, 180, 0);
	CountdownText->SetRelativeRotation(NewRotator, false, false);
	RootComponent = CountdownText;

	CountdownTime = 3;

}

// Called when the game starts or when spawned
void ACountdown::BeginPlay()
{
	Super::BeginPlay();
	
	StartTimer();
}

// Called every frame
void ACountdown::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACountdown::UpdateTimerDisplay()
{
	CountdownText->SetText(FString::FromInt(FMath::Max(CountdownTime, 0)));
}


void ACountdown::AdvanceTimer()
{
	--CountdownTime;
	UpdateTimerDisplay();
	if (CountdownTime < 1)
	{
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		CountdownHasFinished();
	}
}

void ACountdown::CountdownHasFinished()
{
	CountdownText->SetText(TEXT("Go!"));
}

void ACountdown::StartTimer()
{
	UpdateTimerDisplay();
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ACountdown::AdvanceTimer, 1.0f, true);
}