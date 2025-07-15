
#include "HWCharacter.h"
#include "HWPlayerController.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AHWCharacter::AHWCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// 스프링 암 세팅
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 300.0f; // 카메라와 캐릭터 사이의 거리
	SpringArm->bUsePawnControlRotation = true; // 캐릭터의 회전에 따라 카메라가 회전하도록 설정

	// 카메라 컴포넌트 세팅
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false; // 카메라가 캐릭터의 회전에 영향을 받지 않도록 설정
	
}

void AHWCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHWCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHWCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UE_LOG(LogTemp, Warning, TEXT("PlayerInputComponent Class: %s"), 
		   *PlayerInputComponent->GetClass()->GetName());
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
        UE_LOG(LogTemp, Warning, TEXT("Enhanced Input Cast Success"));
		if (const AHWPlayerController* PlayerController = Cast<AHWPlayerController>(GetController()))
		{
			UE_LOG(LogTemp, Warning, TEXT("Controller Loaded"));
			if (PlayerController -> MoveAction)
			{
				EnhancedInput->BindAction(PlayerController->MoveAction, ETriggerEvent::Triggered, this, &AHWCharacter::Move);
			}
			if (PlayerController->JumpAction)
			{
				UE_LOG(LogTemp, Warning, TEXT("PlayerController JumpAction"));
				EnhancedInput->BindAction(PlayerController->JumpAction, ETriggerEvent::Triggered, this, &AHWCharacter::StartJump);
				EnhancedInput->BindAction(PlayerController->JumpAction, ETriggerEvent::Completed, this, &AHWCharacter::StopJump);
			}
			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(PlayerController->LookAction, ETriggerEvent::Triggered, this, &AHWCharacter::Look);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Enhanced Input Cast Failed"));
	}
}

void AHWCharacter::Move(const FInputActionValue& value)
{
	if (!Controller) return;
	const FVector2D MoveInput = value.Get<FVector2D>();

	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		AddMovementInput(GetActorForwardVector(), MoveInput.X);
	}

	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		AddMovementInput(GetActorRightVector(), MoveInput.Y);
	}

}

void AHWCharacter::StartJump(const FInputActionValue& value)
{
	if (value.Get<bool>())
	{
		Jump();
		UE_LOG(LogTemp, Warning, TEXT("Jump Started"));
	}
}

void AHWCharacter::StopJump(const FInputActionValue& value)
{
	if (!value.Get<bool>())
	{
		StopJumping();
	}
}

void AHWCharacter::Look(const FInputActionValue& value)
{
	FVector2D LookInput = value.Get<FVector2D>();

	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);
}

void AHWCharacter::StartSprint(const FInputActionValue& value)
{
}

void AHWCharacter::StopSprint(const FInputActionValue& value)
{
}

