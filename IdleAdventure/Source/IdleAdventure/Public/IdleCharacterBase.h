

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IdleCharacterBase.generated.h"

UCLASS(Abstract)
class IDLEADVENTURE_API AIdleCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AIdleCharacterBase();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

};
