// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerCharacterProperties.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEASTS_OF_KINDRED_API UPlayerCharacterProperties : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerCharacterProperties();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	bool isDodging = false;

	bool isAttacking = false;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void SetDodgingState(bool bDodging);

	UFUNCTION(BlueprintCallable)
	bool GetDodgingState() const;

	UFUNCTION(BlueprintCallable)
	void SetAttackingState(bool bAttacking);

	UFUNCTION(BlueprintCallable)
	bool GetAttackingState() const;
		
};
