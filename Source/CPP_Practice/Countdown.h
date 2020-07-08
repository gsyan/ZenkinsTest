// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Classes/Components/TextRenderComponent.h" //이것을 해야 UTextRenderComponent 를 쓰는데 에러가 안남
#include "Countdown.generated.h"

UCLASS()
class CPP_PRACTICE_API ACountdown : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACountdown();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32 CountdownTime;
	UTextRenderComponent* CountdownText;

	void UpdateTimerDisplay();

	void AdvanceTimer();
	void CountdownHasFinished();
	FTimerHandle CountdownTimerHandle;

	void StartTimer();



};
