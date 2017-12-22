// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/MediaAssets/Public/MediaPlayer.h"
#include "MediaPlayerController.generated.h"

UCLASS()
class MEDIAPLAYERVR_CPP_API AMediaPlayerController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMediaPlayerController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UFUNCTION(BlueprintCallable) void jumpForward();

	UPROPERTY(EditAnywhere) UMediaPlayer *_theMediaPlayer;
	UPROPERTY(EditAnywhere) FString _mediaURL;
};
