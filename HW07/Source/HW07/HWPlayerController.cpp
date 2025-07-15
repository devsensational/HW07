// Fill out your copyright notice in the Description page of Project Settings.


#include "HWPlayerController.h"
#include "EnhancedInputSubsystems.h" // Enhanced Input System의 Local Player Subsystem을 사용하기 위해 포함

AHWPlayerController::AHWPlayerController()
	:	InputMappingContext(nullptr),
		FlyingMappingContext(nullptr),
		MoveAction(nullptr),
		JumpAction(nullptr),
		LookAction(nullptr),
		FlyAction(nullptr),
		RollAction(nullptr),
		AltitudeControlAction(nullptr)

{
	
}

void AHWPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
			UE_LOG(LogTemp, Warning, TEXT("AHWCharacter::LocalPlayer Loaded"));
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			UE_LOG(LogTemp, Warning, TEXT("AHWCharacter::SubSystem Loaded"));
			if (InputMappingContext)
			{
				SubSystem->AddMappingContext(InputMappingContext, 0); // 0은 우선순위, 낮을수록 높은 우선순위
			}
		}
	}
}

void AHWPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (InPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("AHWPlayerController::OnPossess: Pawn %s possessed"), *InPawn->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AHWPlayerController::OnPossess: No Pawn to possess"));
	}
}

void AHWPlayerController::SwitchToInputMappingContext(UInputMappingContext* NewContext, int32 Priority)
{
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			// 기존 모든 IMC 제거
			ClearAllInputMappingContexts();
			
			// 새로운 IMC 추가
			if (NewContext)
			{
				SubSystem->AddMappingContext(NewContext, Priority);
				UE_LOG(LogTemp, Warning, TEXT("Switched to new Input Mapping Context: %s"), *NewContext->GetName());
			}
		}
	}
}

void AHWPlayerController::AddInputMappingContext(UInputMappingContext* ContextToAdd, int32 Priority)
{
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (ContextToAdd)
			{
				SubSystem->AddMappingContext(ContextToAdd, Priority);
				UE_LOG(LogTemp, Warning, TEXT("Added Input Mapping Context: %s"), *ContextToAdd->GetName());
			}
		}
	}
}

void AHWPlayerController::RemoveInputMappingContext(UInputMappingContext* ContextToRemove)
{
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (ContextToRemove)
			{
				SubSystem->RemoveMappingContext(ContextToRemove);
				UE_LOG(LogTemp, Warning, TEXT("Removed Input Mapping Context: %s"), *ContextToRemove->GetName());
			}
		}
	}
}

void AHWPlayerController::ClearAllInputMappingContexts()
{
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			SubSystem->ClearAllMappings();
			UE_LOG(LogTemp, Warning, TEXT("Cleared all Input Mapping Contexts"));
		}
	}
}

void AHWPlayerController::SwitchToFlyingMode()
{
	if (FlyingMappingContext)
	{
		SwitchToInputMappingContext(FlyingMappingContext, 0);
	}
}

void AHWPlayerController::SwitchToNormalMode()
{
	if (InputMappingContext)
	{
		SwitchToInputMappingContext(InputMappingContext, 0);
	}
}
