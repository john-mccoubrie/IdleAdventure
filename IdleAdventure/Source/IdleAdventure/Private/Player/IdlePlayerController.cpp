#include "Player/IdlePlayerController.h"
#include "..\..\Public\Player\IdlePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Interact/TargetInterface.h"

AIdlePlayerController::AIdlePlayerController()
{
	bReplicates = true;
}

void AIdlePlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();
}

void AIdlePlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(IdleContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (Subsystem)
	{
		Subsystem->AddMappingContext(IdleContext, 0);
	}

	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}

void AIdlePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AIdlePlayerController::Move);
	EnhancedInputComponent->BindAction(ClickAction, ETriggerEvent::Triggered, this, &AIdlePlayerController::ClickTree);
}

void AIdlePlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}

}

void AIdlePlayerController::ClickTree(const FInputActionValue& InputActionValue)
{
	ObjectClicked();
}

void AIdlePlayerController::CursorTrace()
{
	
	FHitResult CursorHit;
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
	if (!CursorHit.bBlockingHit) return;

	LastActor = ThisActor;
	ThisActor = Cast<ITargetInterface>(CursorHit.GetActor());
	/*
	 * Line trace from cursor. There are several scenarios:
	 *  A. LastActor is null && ThisActor is null
	 *		- Do nothing
	 *	B. LastActor is null && ThisActor is valid
	 *		- Highlight ThisActor
	 *	C. LastActor is valid && ThisActor is null
	 *		- UnHighlight LastActor
	 *	D. Both actors are valid, but LastActor != ThisActor
	 *		- UnHighlight LastActor, and Highlight ThisActor
	 *	E. Both actors are valid, and are the same actor
	 *		- Do nothing
	 */

	if (LastActor == nullptr)
	{
		if (ThisActor != nullptr)
		{
			// Case B
			ThisActor->HighlightActor();
		}
		else
		{
			// Case A - both are null, do nothing
		}
	}
	else // LastActor is valid
	{
		if (ThisActor == nullptr)
		{
			// Case C
			LastActor->UnHighlightActor();
		}
		else // both actors are valid
		{
			if (LastActor != ThisActor)
			{
				// Case D
				LastActor->UnHighlightActor();
				ThisActor->HighlightActor();
			}
			else
			{
				// Case E - do nothing
			}
		}
	}

}

void AIdlePlayerController::ObjectClicked()
{
	//player clicks the tree and faces it (needs to be in radius using WASD)
	FHitResult TreeHit;
	GetHitResultUnderCursor(ECC_Visibility, false, TreeHit);
	if (!TreeHit.bBlockingHit) return;

	//and in range of the tree
	//player location - hit location = desired range
	//maybe handle the click here
	float InRange = 400.f;
	APawn* PlayerPawn = GetPawn<APawn>();
	FVector PlayerLocation = PlayerPawn->GetActorLocation();
	FVector TreeLocation = TreeHit.GetActor()->GetActorLocation();
	float Distance = FVector::Distance(PlayerLocation, TreeLocation);
	if (TreeHit.GetComponent()->ComponentTags.Contains("Tree") && Distance < InRange)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tree Hit"));
	}
}
