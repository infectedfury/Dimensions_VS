// Fill out your copyright notice in the Description page of Project Settings.
//Work With Output Window Rather than error list with Unreal Errors
#pragma once

#include "Engine/DataTable.h"
#include "UnrealString.h"
#include "CharacterTable.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FUCharacterTable : public FTableRowBase
{

	GENERATED_USTRUCT_BODY()

public:
	FUCharacterTable()
		: Weight(0.0f)
		, WalkSpeed(0.0f)
		, RunSpeed(0.0f)
		, Friction(0.0f)
		, RollSpeed(0.0f)
		, RollDistance(0.0f)
		, RollFatigue(0.0f)
		, LandingLag(0.0f)
		, NumofJumps(0)
		, JumpHeight(0.0f)
		, JumpSpeed(0.0f)
		, FallSpeedMin(0.0f)
		, FallSpeedMax(0.0f)
		, MaxHP(0)

	{};
	~FUCharacterTable(){};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WEIGHT)
		float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WALKSPEED)
		float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RUNSPEED)
		float RunSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FRICTION)
		float Friction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ROLLSPEED)
		float RollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ROLLDISTANCE)
		float RollDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ROLLFATIGUE)
		float RollFatigue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LANDINGLAG)
		float LandingLag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = NUMOFJUMPS)
		int32 NumofJumps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = JUMPHEIGHT)
		float JumpHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = JUMPSPEED)
		float JumpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FALLSPEEDMIN)
		float FallSpeedMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FALLSPEEDMAX)
		float FallSpeedMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MAXHP)
		int32 MaxHP;

};
