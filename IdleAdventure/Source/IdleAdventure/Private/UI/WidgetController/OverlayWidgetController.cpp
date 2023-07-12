


#include "UI/WidgetController/OverlayWidgetController.h"
#include "AbilitySystem/IdleAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const UIdleAttributeSet* IdleAttributeSet = CastChecked<UIdleAttributeSet>(AttributeSet);

	OnEXPChanged.Broadcast(IdleAttributeSet->GetWoodcutExp());
	OnMaxEXPChanged.Broadcast(IdleAttributeSet->GetMaxWoodcutExp());

}
