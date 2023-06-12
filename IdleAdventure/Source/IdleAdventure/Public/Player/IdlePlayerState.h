#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "IdlePlayerState.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

UCLASS()
class IDLEADVENTURE_API AIdlePlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	AIdlePlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	
protected:
	UPROPERTY()
		TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
		TObjectPtr<UAttributeSet> AttributeSet;

};
