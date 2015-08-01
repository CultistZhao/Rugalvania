// Fill out your copyright notice in the Description page of Project Settings.

#include "Rugalvania.h"
#include "MyFrstActor.h"


// Sets default values
AMyFrstActor::AMyFrstActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyFrstActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFrstActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

