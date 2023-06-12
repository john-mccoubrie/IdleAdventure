

#pragma once

#include "CoreMinimal.h"
#include "IdleCharacterBase.h"
#include "IdleCharacter.generated.h"

/**
 * 
 */
UCLASS()
class IDLEADVENTURE_API AIdleCharacter : public AIdleCharacterBase
{
	GENERATED_BODY()

public:
	AIdleCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilityActorInfo();
	
};
