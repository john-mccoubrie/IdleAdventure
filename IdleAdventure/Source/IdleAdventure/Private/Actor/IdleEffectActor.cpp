#include "Actor/IdleEffectActor.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/IdleAttributeSet.h"
#include "Components/SphereComponent.h"

AIdleEffectActor::AIdleEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);

	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");
	Sphere->SetupAttachment(GetRootComponent());
}

void AIdleEffectActor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//TODO: Change this to apply a Gameplay Effect. For now, using const_cast as a hack!
	if (IAbilitySystemInterface* ASCInterface = Cast<IAbilitySystemInterface>(OtherActor))
	{
		const UIdleAttributeSet* IdleAttributeSet = Cast<UIdleAttributeSet>(ASCInterface->GetAbilitySystemComponent()->GetAttributeSet(UIdleAttributeSet::StaticClass()));

		UIdleAttributeSet* MutableIdleAttributeSet = const_cast<UIdleAttributeSet*>(IdleAttributeSet);
		MutableIdleAttributeSet->SetWoodcutExp(IdleAttributeSet->GetWoodcutExp() + 25.f);
		//Destroy();

		//the player is within the radius
		//gauge the distance
		// enter woodcutting "state"
		//start the woodcutting animation
		//run the wooductting exp algoritm
		//add the logs to the inventory
		//destroy the tree after a certain time
		//add exp until player level up
	}
}

void AIdleEffectActor::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void AIdleEffectActor::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AIdleEffectActor::OnOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &AIdleEffectActor::EndOverlap);
	
}


