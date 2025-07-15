// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HWCustomCharacter.generated.h"

class UCapsuleComponent;
struct FInputActionValue;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class HW07_API AHWCustomCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AHWCustomCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* 캐릭터 물리 속성 */
	// Capsule 컴포넌트
	bool bIsFlying = false;
	
	// 착지 상태 확인 관련 변수
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Physics")
	bool bIsGrounded = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics")
	float GroundCheckDistance = 5.0f; // 바닥 체크할 거리
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Physics")
	TObjectPtr<UCapsuleComponent> CapsuleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Physics")
	float Gravity = 980.0f;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Physics")
	float GravityScale = 1.0f;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	float VerticalVelocity = 0.0f;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	float CurrentVerticalVelocity = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	bool bIsJumping = false;
	
	FTimerHandle JumpTimerHandle;
	
	UFUNCTION()
	void ApplyGravity(float DeltaTime);
	
	// 바닥 체크 함수
	UFUNCTION(BlueprintCallable, Category = "Physics")
	bool CheckGrounded();
	
	UFUNCTION(BlueprintCallable, Category = "Physics")
	bool PerformGroundTrace(FHitResult& HitResult);
	
	/* 무브먼트 속성 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 600.0f; 
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float JumpForce = 600.0f; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float AirControl = 0.5f; // 공중에서의 이동 제어력
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float AltitudeSpeed = 500.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RollingSpeed = 200.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float JumpTime = 1.0f; 

	
	
	/* 카메라 관련 섹션 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	TObjectPtr<USpringArmComponent> SpringArm;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	TObjectPtr<UCameraComponent> FollowCamera;
	
	/* Input 관련 섹션 */
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	float MouseSensitivity = 1.0f; // 마우스 감도 조절
	
	UFUNCTION()
	void Move(const FInputActionValue& value);
	
	UFUNCTION()
	void StartJump(const FInputActionValue& value);
	
	UFUNCTION()
	void StopJump();
	
	UFUNCTION()
	void Look(const FInputActionValue& value);
	
	UFUNCTION()
	void SwitchFly(const FInputActionValue& value);
	
	UFUNCTION()
	void Roll(const FInputActionValue& value);
	
	UFUNCTION()
	void AltitudeControl(const FInputActionValue& value);
	
	
	/* Mesh 관련 섹션 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Mesh)
	TObjectPtr<USkeletalMeshComponent> Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	TObjectPtr<UAnimInstance> AnimInstance;
	
};
