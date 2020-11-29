// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSCharacter.h"

// Sets default values
ATPSCharacter::ATPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// BEGIN_EXPORT_ENUM(EEye)
// ADD_SCOPED_ENUM_VALUE(LeftEye)
// ADD_SCOPED_ENUM_VALUE(RightEye)
// END_EXPORT_ENUM(EEye)
// 
// 
// BEGIN_EXPORT_ENUM(EHand)
// ADD_ENUM_VALUE(LeftHand)
// ADD_ENUM_VALUE(RightHand)
// END_EXPORT_ENUM(EHand)



BEGIN_EXPORT_CLASS(Vec3, float, float, float)
ADD_PROPERTY(x)
ADD_PROPERTY(y)
ADD_PROPERTY(z)
ADD_FUNCTION(Set)
ADD_NAMED_FUNCTION("Equals", operator==)
ADD_FUNCTION_EX("Get", Vec3&, Get)
ADD_CONST_FUNCTION_EX("GetCopy", void, Get, Vec3&)
ADD_STATIC_FUNCTION(Cross)
ADD_STATIC_FUNCTION_EX("MulScalar", Vec3, Multiply, const Vec3&, float)
ADD_STATIC_FUNCTION_EX("MulVec", Vec3, Multiply, const Vec3&, const Vec3&)
END_EXPORT_CLASS()
IMPLEMENT_EXPORTED_CLASS(Vec3)

