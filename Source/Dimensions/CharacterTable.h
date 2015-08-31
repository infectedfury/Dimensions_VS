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
		: Height(0)
		, Block("Bah")
		, Weight(0)
		, Jump(0.0f)
	{};
	~FUCharacterTable(){};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HEIGHT)
		int32 Height;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BLOCK)
		FString Block;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WEIGHT)
		int32 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = JUMP)
		float Jump; 

};
