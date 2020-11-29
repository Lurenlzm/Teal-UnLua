// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UnLuaEx.h"
#include "TPSCharacter.generated.h"

UCLASS()
class TPSPROJECT_API ATPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};


struct Vec3
{
	Vec3() : x(0), y(0), z(0) {}
	Vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

	void Set(const Vec3& V) { *this = V; }
	Vec3& Get() { return *this; }
	void Get(Vec3& V) const { V = *this; }

	bool operator==(const Vec3& V) const { return x == V.x && y == V.y && z == V.z; }

	static Vec3 Cross(const Vec3& A, const Vec3& B) { return Vec3(A.y * B.z - A.z * B.y, A.z * B.x - A.x * B.z, A.x * B.y - A.y * B.x); }
	static Vec3 Multiply(const Vec3& A, float B) { return Vec3(A.x * B, A.y * B, A.z * B); }
	static Vec3 Multiply(const Vec3& A, const Vec3& B) { return Vec3(A.x * B.x, A.y * B.y, A.z * B.z); }

	float x, y, z;
};


enum EHand
{
	LeftHand,
	RightHand
};



enum class EEye
{
	LeftEye,
	RightEye
};

