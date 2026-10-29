// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//мяу
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyHero.generated.h"

UCLASS()
class ERROR666_API AMyHero : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyHero();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Объявления функций движения
	void MoveForward(float Value);
	void MoveRight(float Value);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};