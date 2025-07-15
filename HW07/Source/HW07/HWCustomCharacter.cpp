// Fill out your copyright notice in the Description page of Project Settings.


#include "HWCustomCharacter.h"

#include "EnhancedInputComponent.h"
#include "HWPlayerController.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/RootMotionSource.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AHWCustomCharacter::AHWCustomCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// 캡슐 컴포넌트 세팅
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	RootComponent = CapsuleComponent;
	CapsuleComponent->SetCollisionProfileName(TEXT("Pawn"));
	CapsuleComponent->SetSimulatePhysics(false); 
	
	// 메쉬 컴포넌트 세팅
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CapsuleComponent);
	Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f)); 
	
	Mesh->SetCollisionProfileName(TEXT("CharacterMesh"));
	// 스프링 암 세팅
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 300.0f; 
	SpringArm->bUsePawnControlRotation = false; 

	// 카메라 컴포넌트 세팅
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false; // 수동 회전을 위해 false로 설정

}

void AHWCustomCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHWCustomCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 매 프레임마다 바닥 체크
	CheckGrounded();

	if ((!bIsFlying && !bIsGrounded) || bIsJumping)
	{
		ApplyGravity(DeltaTime);
	}
}

void AHWCustomCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		UE_LOG(LogTemp, Warning, TEXT("Enhanced Input Cast Success"));
		if (const AHWPlayerController* PlayerController = Cast<AHWPlayerController>(GetController()))
		{
			UE_LOG(LogTemp, Warning, TEXT("Controller Loaded"));
			if (PlayerController -> MoveAction)
			{
				EnhancedInput->BindAction(PlayerController->MoveAction, ETriggerEvent::Triggered, this, &AHWCustomCharacter::Move);
			}
			if (PlayerController->JumpAction)
			{
				UE_LOG(LogTemp, Warning, TEXT("PlayerController JumpAction"));
				EnhancedInput->BindAction(PlayerController->JumpAction, ETriggerEvent::Started, this, &AHWCustomCharacter::StartJump);
			}
			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(PlayerController->LookAction, ETriggerEvent::Triggered, this, &AHWCustomCharacter::Look);
			}
			if (PlayerController->FlyAction)
			{
				EnhancedInput->BindAction(PlayerController->FlyAction, ETriggerEvent::Started, this, &AHWCustomCharacter::SwitchFly);
			}
			if (PlayerController->RollAction)
			{
				EnhancedInput->BindAction(PlayerController->RollAction, ETriggerEvent::Triggered, this, &AHWCustomCharacter::Roll);
			}
			if (PlayerController->AltitudeControlAction)
			{
				EnhancedInput->BindAction(PlayerController->AltitudeControlAction, ETriggerEvent::Triggered, this, &AHWCustomCharacter::AltitudeControl);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Enhanced Input Cast Failed"));
	}
}

void AHWCustomCharacter::ApplyGravity(float DeltaTime)
{
	VerticalVelocity -= Gravity * GravityScale * DeltaTime; 
	VerticalVelocity = FMath::Max(VerticalVelocity, -2000.0f);
	FVector DeltaMovement = FVector(0, 0, VerticalVelocity * DeltaTime);
	AddActorWorldOffset(DeltaMovement, true);
}

void AHWCustomCharacter::Move(const FInputActionValue& value)
{
	if (!Controller) return;
	
	FVector2D MoveInput = value.Get<FVector2D>();

	FRotator ControllerRotation = SpringArm->GetTargetRotation();
	FRotator YawRotation(0, ControllerRotation.Yaw, 0);
    
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	
	const float DeltaTime = GetWorld()->GetDeltaSeconds();
	const float CurrentSpeed = bIsGrounded ? MoveSpeed : MoveSpeed * AirControl;
	
	// 화면에 CurrentSpeed 출력
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Blue, FString::Printf(TEXT("CurrentSpeed: %.1f"), CurrentSpeed));
	}
	
	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		AddActorLocalOffset(ForwardDirection * MoveInput.X * CurrentSpeed * DeltaTime, true);
	}

	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		AddActorLocalOffset(RightDirection * MoveInput.Y * CurrentSpeed * DeltaTime, true);
	}
}

void AHWCustomCharacter::StartJump(const FInputActionValue& value)
{
	if (bIsGrounded && !bIsFlying)
	{
		UE_LOG(LogTemp, Warning, TEXT("Jump Started"));
		VerticalVelocity = JumpForce;
		bIsJumping = true;

		// JumpTime 초 후에 StopJump 호출
		GetWorld()->GetTimerManager().SetTimer(JumpTimerHandle, this, &AHWCustomCharacter::StopJump, JumpTime, false);
	}
}

void AHWCustomCharacter::StopJump()
{
	if (bIsJumping)
	{
		//VerticalVelocity = 0.0f;
		bIsJumping = false;
		
		// 타이머 클리어
		GetWorld()->GetTimerManager().ClearTimer(JumpTimerHandle);
	}
}

void AHWCustomCharacter::Look(const FInputActionValue& value)
{
	if (!Controller) return;
	
	FVector2D LookInput = value.Get<FVector2D>();

	if (SpringArm)
	{
		FRotator CurrentRotation = SpringArm->GetComponentRotation();
		FRotator MeshCurrentRotation = Mesh->GetComponentRotation();
		const float DeltaTime = GetWorld()->GetDeltaSeconds();
		
		
		CurrentRotation.Yaw += LookInput.X * MouseSensitivity * DeltaTime; // Yaw 회전 (좌우)
		CurrentRotation.Pitch -= LookInput.Y * MouseSensitivity * DeltaTime; // Pitch 회전 (상하)
		MeshCurrentRotation.Yaw += LookInput.X * MouseSensitivity * DeltaTime; // 메쉬의 Yaw 회전 (좌우)
		if (bIsFlying) MeshCurrentRotation.Roll += LookInput.Y * MouseSensitivity * DeltaTime; // 메쉬의 Pitch 회전 (상하)
		
		// Roll 값을 -120도에서 120도로 제한
		MeshCurrentRotation.Roll = FMath::Clamp(MeshCurrentRotation.Roll, -80.0f, 140.0f);
		CurrentRotation.Pitch = FMath::Clamp(CurrentRotation.Pitch, -80.0f, 80.0f);
        
		SpringArm->SetWorldRotation(CurrentRotation);
		Mesh->SetWorldRotation(MeshCurrentRotation);
	}
}

void AHWCustomCharacter::SwitchFly(const FInputActionValue& value)
{
	bIsFlying = !bIsFlying;
	UE_LOG(LogTemp, Warning, TEXT("Switching Fly"));
	if (bIsFlying)
	{
		VerticalVelocity = 0.0f; 
		
		if (AHWPlayerController* PlayerController = Cast<AHWPlayerController>(GetController()))
		{
			PlayerController->SwitchToFlyingMode();

			FRotator CurrentRotation = FRotator(0.0f, Mesh->GetRelativeRotation().Yaw, 90.0f);
			Mesh->SetWorldRotation(CurrentRotation);
			UE_LOG(LogTemp, Warning, TEXT("Flying mode activated - IMC switched"));
		}
	}
	else
	{
		if (AHWPlayerController* PlayerController = Cast<AHWPlayerController>(GetController()))
		{
			PlayerController->SwitchToNormalMode();
			FRotator CurrentRotation = FRotator(0.0f, Mesh->GetRelativeRotation().Yaw, 0.0f);
			Mesh->SetWorldRotation(CurrentRotation);
			UE_LOG(LogTemp, Warning, TEXT("Flying mode deactivated - IMC switched back to normal"));
		}
	}
}

void AHWCustomCharacter::Roll(const FInputActionValue& value)
{
	if (!Controller) return;

	UE_LOG(LogTemp, Warning, TEXT("Rolling"));
	
	float RollInput = value.Get<float>();
	FRotator CurrentRotation = Mesh->GetComponentRotation();
	const float DeltaTime = GetWorld()->GetDeltaSeconds();
	
	CurrentRotation.Pitch += RollInput * RollingSpeed * DeltaTime; // Yaw 회전 (좌우)
	CurrentRotation.Pitch = FMath::Clamp(CurrentRotation.Pitch, -80.0f, 80.0f); 
	Mesh->SetWorldRotation(CurrentRotation);
}

void AHWCustomCharacter::AltitudeControl(const FInputActionValue& value)
{
	if (!Controller) return;
	
	float AltitudeInput = value.Get<float>();
	const float DeltaTime = GetWorld()->GetDeltaSeconds();

	if (!FMath::IsNearlyZero(AltitudeInput))
	{
		// 위/아래 방향으로 이동 (Z축)
		FVector UpDirection = FVector::UpVector;
		
		AddActorLocalOffset(UpDirection * AltitudeInput * AltitudeSpeed * DeltaTime, true);
		
		UE_LOG(LogTemp, Warning, TEXT("Altitude Control: %f"), AltitudeInput);
	}
	
}

bool AHWCustomCharacter::CheckGrounded()
{
	FHitResult HitResult;
	bool bWasGrounded = bIsGrounded;
	
	// Ray 트레이스를 수행하여 바닥 검사
	bIsGrounded = PerformGroundTrace(HitResult);
	
	// 착지 상태가 변경되었을 때 로그 출력
	if (bIsGrounded != bWasGrounded)
	{
		if (bIsGrounded)
		{
			UE_LOG(LogTemp, Warning, TEXT("Character landed on ground"));
			// 착지 시 수직 속도 초기화
			VerticalVelocity = 0.0f;
		}
	}
	
	return bIsGrounded;
}

bool AHWCustomCharacter::PerformGroundTrace(FHitResult& HitResult)
{
	if (!CapsuleComponent)
	{
		return false;
	}
	
	FVector ActorLocation = GetActorLocation();
	float CapsuleHalfHeight = CapsuleComponent->GetScaledCapsuleHalfHeight();
	
	FVector TraceStart = ActorLocation + FVector(0, 0, -CapsuleHalfHeight + 10.0f);
	FVector TraceEnd = TraceStart + FVector(0, 0, -GroundCheckDistance);
	
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this); // 자기 자신은 무시
	QueryParams.bTraceComplex = true;  // 복잡한 메쉬 충돌 사용
	
	// 충돌 응답 설정 (WorldStatic과 WorldDynamic 채널과 충돌)
	FCollisionResponseParams ResponseParams;
	
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		QueryParams,
		ResponseParams
	);
	
#if WITH_EDITOR
	if (GetWorld())
	{
		FColor LineColor = bHit ? FColor::Green : FColor::Red;
		DrawDebugLine(GetWorld(), TraceStart, TraceEnd, LineColor, false, 0.0f, 0, 1.0f);
		
		if (bHit)
		{
			DrawDebugPoint(GetWorld(), HitResult.ImpactPoint, 5.0f, FColor::Yellow, false, 0.0f);
		}
	}
#endif
	
	return bHit;
}
