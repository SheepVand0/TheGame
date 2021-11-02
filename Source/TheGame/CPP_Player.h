// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "CPP_Player.generated.h"

UCLASS()
class THEGAME_API ACPP_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_Player();

	UFUNCTION(BlueprintCallable)
	void MoveForward(float value);

	UFUNCTION(BlueprintCallable)
	void MoveBackward(float value);

	UFUNCTION(BlueprintCallable)
	void MoveRight(float value);

	UFUNCTION(BlueprintCallable)
	void MoveLeft(float value);

	UFUNCTION(BlueprintCallable)
	void PlayerJump();

	UPROPERTY(EditAnywhere)
	UCameraComponent* FPS_Cam;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
