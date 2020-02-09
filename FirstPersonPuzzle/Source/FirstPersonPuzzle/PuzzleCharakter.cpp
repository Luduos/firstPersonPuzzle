// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleCharakter.h"

// Sets default values
APuzzleCharakter::APuzzleCharakter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APuzzleCharakter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuzzleCharakter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APuzzleCharakter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

