// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DIETEMNA_API UPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPlayerComponent();

	UPROPERTY(EditAnywhere, Category = "LD")
		int m_dayValue;

	/// <summary>
	/// Get the day value
	/// </summary>
	UFUNCTION(BlueprintCallable)
		int GetDayValue();

	/// <summary>
	/// Set the day value
	/// </summary>
	UFUNCTION(BlueprintCallable)
		void SetDayValue(int Value);

	/// <summary>
	/// Get the task value
	/// </summary>
	UFUNCTION(BlueprintCallable)
		int GetTaskValue();

	/// <summary>
	/// Set the task value
	/// </summary>
	UFUNCTION(BlueprintCallable)
		void SetTaskValue(int p_taskValue);

	/// <summary>
	/// Increase the task value by +1
	/// </summary>
	UFUNCTION(BlueprintCallable)
		void IncreaseTaskValue();

private:
	// VARIABLES
	UPROPERTY()
		int m_taskValue;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
