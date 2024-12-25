// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueController.h"

// Sets default values
ADialogueController::ADialogueController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_Timer = 0;
}

// Called when the game starts or when spawned
void ADialogueController::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADialogueController::PopulateDialogue()
{
	UE_LOG(LogTemp, Warning, TEXT("Hello"));
}

// Called every frame
void ADialogueController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

