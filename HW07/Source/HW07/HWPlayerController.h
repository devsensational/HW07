// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "HWPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HW07_API AHWPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AHWPlayerController();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "input")
	TObjectPtr<UInputMappingContext> InputMappingContext;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "input")
	TObjectPtr<UInputMappingContext> FlyingMappingContext;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "input")
	TObjectPtr<UInputAction> LookAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "input")
	TObjectPtr<UInputAction> JumpAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "input")
	TObjectPtr<UInputAction> FlyAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "input")
	TObjectPtr<UInputAction> RollAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "input")
	TObjectPtr<UInputAction> AltitudeControlAction;
	
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SwitchToInputMappingContext(UInputMappingContext* NewContext, int32 Priority = 0);
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void AddInputMappingContext(UInputMappingContext* ContextToAdd, int32 Priority = 0);
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void RemoveInputMappingContext(UInputMappingContext* ContextToRemove);
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void ClearAllInputMappingContexts();
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SwitchToFlyingMode();
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SwitchToNormalMode();
};
