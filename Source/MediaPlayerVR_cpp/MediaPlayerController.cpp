// Fill out your copyright notice in the Description page of Project Settings.

#include "MediaPlayerController.h"


// Sets default values
AMediaPlayerController::AMediaPlayerController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMediaPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	_theMediaPlayer->OpenFile( _mediaURL );
//	_theMediaPlayer->Play();
}

// Called every frame
void AMediaPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

