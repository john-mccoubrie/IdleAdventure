#include "Player/IdlePlayerState.h"
#include "AbilitySystem/IdleAbilitySystemComponent.h"
#include "AbilitySystem/IdleAttributeSet.h"


AIdlePlayerState::AIdlePlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UIdleAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	//change to single player?
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UIdleAttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.f;
}



UAbilitySystemComponent* AIdlePlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;;
}
