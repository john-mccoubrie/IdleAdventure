

#pragma once

#include "CoreMinimal.h"
#include "UI/IdleWidgetController.h"
#include "OverlayWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEXPChangedSignature, float, NewEXP);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxEXPChangedSignature, float, NewMaxEXP);

UCLASS(BlueprintType, Blueprintable)
class IDLEADVENTURE_API UOverlayWidgetController : public UIdleWidgetController
{
	GENERATED_BODY()
	
public:
	virtual void BroadcastInitialValues() override;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
		FOnEXPChangedSignature OnEXPChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
		FOnMaxEXPChangedSignature OnMaxEXPChanged;

};
