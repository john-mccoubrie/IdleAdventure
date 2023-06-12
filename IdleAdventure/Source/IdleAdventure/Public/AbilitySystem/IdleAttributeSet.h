

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "IdleAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class IDLEADVENTURE_API UIdleAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UIdleAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_WoodcutExp, Category = "Skills")
		FGameplayAttributeData WoodcutExp;
	ATTRIBUTE_ACCESSORS(UIdleAttributeSet, WoodcutExp);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxWoodcutExp, Category = "Skills")
		FGameplayAttributeData MaxWoodcutExp;
	ATTRIBUTE_ACCESSORS(UIdleAttributeSet, MaxWoodcutExp);


	UFUNCTION()
		void OnRep_WoodcutExp(const FGameplayAttributeData& OldWoodcutExp) const;

	UFUNCTION()
		void OnRep_MaxWoodcutExp(const FGameplayAttributeData& OldMaxWoodcutExp) const;

	
	
};
