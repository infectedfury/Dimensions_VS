// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "MoveSetStructure.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FUMoveSetDataTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FUMoveSetDataTable() :
		Damage(0)
		, Knockback(0.0f)
		, VertProjectory(0.0f)
		, HorProjectory(0.0f)
		, Force(0.0f)
		, LaunchRate(0.0f)
		, Priority(0.0f)
		, HitLag(0.0f)
		, Sweet(0.0f)
		, Sour(0.0f)
		, Meteor(0.0f)
		, ParticleNum(0)
	{};

	~FUMoveSetDataTable(){};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DAMAGE)
		int32 Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = KNOCKBACK)
		float Knockback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VERTPROJECTORY)
		float VertProjectory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HORPROJECTORY)
		float HorProjectory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FORCE)
		float Force;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LAUNCHRATE)
		float LaunchRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PRIORITY)
		int32 Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HITLAG)
		float HitLag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SWEET)
		float Sweet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SOUR)
		float Sour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = METEOR)
		float Meteor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PARTICLENUM)
		int32 ParticleNum;
};

	
	
