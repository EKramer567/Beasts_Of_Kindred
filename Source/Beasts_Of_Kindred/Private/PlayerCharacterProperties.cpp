// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterProperties.h"

// Sets default values for this component's properties
UPlayerCharacterProperties::UPlayerCharacterProperties()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerCharacterProperties::BeginPlay()
{
	Super::BeginPlay();

	isDodging = false;
	// ...
	
}


// Called every frame
void UPlayerCharacterProperties::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerCharacterProperties::SetDodgingState(bool bDodging)
{
	if (isDodging != bDodging)
	{
		isDodging = bDodging;
	}
}

bool UPlayerCharacterProperties::GetDodgingState() const
{
	return isDodging;
}

void UPlayerCharacterProperties::SetAttackingState(bool bAttacking)
{
	if (isAttacking != bAttacking)
	{
		isAttacking = bAttacking;
	}
}

bool UPlayerCharacterProperties::GetAttackingState() const
{
	return isAttacking;
}



