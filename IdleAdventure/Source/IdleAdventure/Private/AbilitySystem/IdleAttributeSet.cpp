#include "AbilitySystem/IdleAttributeSet.h"
#include "Net/UnrealNetwork.h"

UIdleAttributeSet::UIdleAttributeSet()
{
	InitWoodcutExp(100.f);
	InitMaxWoodcutExp(100.f);
}

void UIdleAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UIdleAttributeSet, WoodcutExp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UIdleAttributeSet, MaxWoodcutExp, COND_None, REPNOTIFY_Always);
}

void UIdleAttributeSet::OnRep_WoodcutExp(const FGameplayAttributeData& OldWoodcutExp) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UIdleAttributeSet, WoodcutExp, OldWoodcutExp);
}

void UIdleAttributeSet::OnRep_MaxWoodcutExp(const FGameplayAttributeData& OldMaxWoodcutExp) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UIdleAttributeSet, MaxWoodcutExp, OldMaxWoodcutExp);
}
