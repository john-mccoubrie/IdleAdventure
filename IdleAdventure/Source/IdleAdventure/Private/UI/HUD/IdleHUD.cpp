


#include "UI/HUD/IdleHUD.h"
#include "UI/IdleUserWidget.h"

void AIdleHUD::BeginPlay()
{
	Super::BeginPlay();

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();

}