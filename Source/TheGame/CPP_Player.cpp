// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Player.h"

// Sets default values
ACPP_Player::ACPP_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FPS_Cam = CreateDefaultSubobject<UCameraComponent>(TEXT("FPS Cam"));

}

// Called when the game starts or when spawned
void ACPP_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACPP_Player::MoveForward);
	PlayerInputComponent->BindAxis("MoveBackward", this, &ACPP_Player::MoveBackward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACPP_Player::MoveRight);
	PlayerInputComponent->BindAxis("MoveLeft", this, &ACPP_Player::MoveLeft);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACPP_Player::PlayerJump);

}

void ACPP_Player::MoveForward(float value) {
	
	if (value != 0) {

		AddMovementInput(GetActorForwardVector(), value, true);

	}

}

void ACPP_Player::MoveBackward(float value) {

	if (value != 0) {

		AddMovementInput(GetActorForwardVector(), value, true);

	}

}

void ACPP_Player::MoveRight(float value) {

	if (value != 0) {

		AddMovementInput(GetActorRightVector(), value, true);

	}

}

void ACPP_Player::MoveLeft(float value) {

	if (value != 0) {

		AddMovementInput(GetActorRightVector(), value, true);

	}

}

void ACPP_Player::PlayerJump() {

	Jump();

}