// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponent.h"

// Sets default values for this component's properties
UPlayerComponent::UPlayerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	m_taskValue = 1;
	// ...
}


// Called when the game starts
void UPlayerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

int UPlayerComponent::GetDayValue() {
	return m_dayValue;
}

void UPlayerComponent::SetDayValue(int Value) {
	m_dayValue = Value;
}

int UPlayerComponent::GetTaskValue() {
	return m_taskValue;
}

void UPlayerComponent::SetTaskValue(int p_taskValue) {
	m_taskValue = p_taskValue;
}

void UPlayerComponent::IncreaseTaskValue() {
	m_taskValue++;
}

// Called every frame
void UPlayerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

