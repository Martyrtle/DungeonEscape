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

	float myFloat = 3.14f;
	float* floatPtr = &myFloat;

	float result = *floatPtr + 1.62f; // 4.76f
	UE_LOG(LogTemp, Display, TEXT("Result is %f"), result);

	*floatPtr = 2.72f;
	UE_LOG(LogTemp, Display, TEXT("My Float is %f"), myFloat);
	UE_LOG(LogTemp, Display, TEXT("*floatPtr is %f"), *floatPtr);

	UE_LOG(LogTemp, Display, TEXT("&myFloat is %p"), &myFloat);
	UE_LOG(LogTemp, Display, TEXT("floatPtr is %p"), floatPtr);

	// ---

	FVector myVector = FVector(1.0f, 1.0f, 1.0f);
	FVector* fvectorPtr = &myVector;

	fvectorPtr->X = 3.14f;
	fvectorPtr->Y = 1.62f;
	fvectorPtr->Z = 2.72f;

	UE_LOG(LogTemp, Display, TEXT("My Vector is %s"), *myVector.ToCompactString());

}


// Called every frame
void UMoverComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

