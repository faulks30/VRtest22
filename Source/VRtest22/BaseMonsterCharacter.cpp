// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMonsterCharacter.h"

// Sets default values
ABaseMonsterCharacter::ABaseMonsterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseMonsterCharacter::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ABaseMonsterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseMonsterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//MINE: Added to move AIPerception to socket "HeadSocket" in skeleton
void ABaseMonsterCharacter::GetActorEyesViewPoint(FVector& Location, FRotator& Rotation) const
{
	Location = GetMesh()->GetSocketLocation("HeadSocket");

	Rotation = GetActorRotation();
	Rotation.Yaw += GetMesh()->GetSocketTransform("HeadSocket", RTS_Actor).Rotator().Yaw + 90.0;

	//	Rotation.Yaw -= GetMesh()->GetSocketTransform("HeadSocket", RTS_ParentBoneSpace).Rotator().Roll;
	//	Rotation.Yaw = GetMesh()->GetSocketTransform("HeadSocket", RTS_World).Rotator().Yaw;
}

