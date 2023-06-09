


#include "IdleCharacterBase.h"

AIdleCharacterBase::AIdleCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void AIdleCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


