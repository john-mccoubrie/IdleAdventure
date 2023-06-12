#include "Character/IdleCharacter.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/IdlePlayerState.h"

AIdleCharacter::AIdleCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void AIdleCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	//Init ability actor infor for the server
	InitAbilityActorInfo();
}

void AIdleCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//Init ability actor info for the client
	InitAbilityActorInfo();
}

void AIdleCharacter::InitAbilityActorInfo()
{
	AIdlePlayerState* IdlePlayerState = GetPlayerState<AIdlePlayerState>();
	check(IdlePlayerState);
	IdlePlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(IdlePlayerState, this);
	AbilitySystemComponent = IdlePlayerState->GetAbilitySystemComponent();
	AttributeSet = IdlePlayerState->GetAttributeSet();
}
