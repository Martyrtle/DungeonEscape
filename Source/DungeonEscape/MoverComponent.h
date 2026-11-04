// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoverComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONESCAPE_API UMoverComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMoverComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(VisibleAnywhere)
	bool shouldMove = false;

public:
	UPROPERTY(EditAnywhere)
	FVector moveOffset;
	UPROPERTY(EditAnywhere)
	float moveTime = 4.0f;

	UPROPERTY(VisibleAnywhere)
	bool reachedTarget = false;

	FVector targetLocation;
	FVector startLocation;

	bool GetShouldMove();
	void SetShouldMove(bool newShouldMove);

		
};
