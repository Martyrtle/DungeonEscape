// Fill out your copyright notice in the Description page of Project Settings.


#include "MoverComponent.h"

// Sets default values for this component's properties
UMoverComponent::UMoverComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMoverComponent::BeginPlay()
{
	Super::BeginPlay();

	startLocation = GetOwner()->GetActorLocation();

	UE_LOG(LogTemp, Display, TEXT("%s is at location %s"), *GetOwner()->GetActorNameOrLabel() , *startLocation.ToCompactString());

}


// Called every frame
void UMoverComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector currentLocation = GetOwner()->GetActorLocation();

	currentLocation.Z += 100.0f * DeltaTime;

	GetOwner()->SetActorLocation(currentLocation);

}

