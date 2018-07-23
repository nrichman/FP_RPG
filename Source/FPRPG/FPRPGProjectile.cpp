// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FPRPGProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/BoxComponent.h"

AFPRPGProjectile::AFPRPGProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("SphereComp"));
	CollisionComp->InitBoxExtent(FVector(1.0f, 1.0f, 20.0f));

	// Set as root component
	RootComponent = CollisionComp;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}