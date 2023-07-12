

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "IdleHUD.generated.h"

class UIdleUserWidget;

UCLASS()
class IDLEADVENTURE_API AIdleHUD : public AHUD
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
		TObjectPtr<UIdleUserWidget>  OverlayWidget;

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
		TSubclassOf<UIdleUserWidget> OverlayWidgetClass;
};
