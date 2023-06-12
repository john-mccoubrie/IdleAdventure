


#include "IdleCharacterBase.h"

AIdleCharacterBase::AIdleCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

UAbilitySystemComponent* AIdleCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AIdleCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


