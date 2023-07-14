

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "IdlePlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class ITargetInterface;

UCLASS()
class IDLEADVENTURE_API AIdlePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AIdlePlayerController();
	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

private:

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> IdleContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	void Move(const FInputActionValue& InputActionValue);

	void CursorTrace();
	void ObjectClicked();
	//FActor OtherTree;
	TObjectPtr<ITargetInterface> LastActor;
	TObjectPtr<ITargetInterface> ThisActor;
};
