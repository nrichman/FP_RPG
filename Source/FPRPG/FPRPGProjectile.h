// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPRPGProjectile.generated.h"

UCLASS(config=Game)
class AFPRPGProjectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	class UBoxComponent* CollisionComp;

public:
	AFPRPGProjectile();
};

