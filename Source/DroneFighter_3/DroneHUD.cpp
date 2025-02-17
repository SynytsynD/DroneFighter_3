// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneHUD.h"
#include "Blueprint/UserWidget.h"

ADroneHUD::ADroneHUD() : Super()
{

	ConstructorHelpers::FClassFinder<UUserWidget> WBP_DroneHealth(TEXT("/Game/BluePrint/WBP_DroneHealth"));

	MainHUD = WBP_DroneHealth.Class;
}

void ADroneHUD::BeginPlay()
{
	Super::BeginPlay();

	UUserWidget* DroneWidget = CreateWidget(GetWorld(), MainHUD);
	DroneWidget->AddToViewport();
}

void ADroneHUD::DrawHUD()
{
    Super::DrawHUD();

    if (CrosshairTexture)
    {
        // Find the center of our canvas.
        FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

        // Offset by half of the texture's dimensions so that the center of the texture aligns with the center of the Canvas.
        FVector2D CrossHairDrawPosition(Center.X - (CrosshairTexture->GetSurfaceWidth() * 0.5f), Center.Y - (CrosshairTexture->GetSurfaceHeight() * 0.5f));

        // Draw the crosshair at the centerpoint.
        FCanvasTileItem TileItem(CrossHairDrawPosition, CrosshairTexture->Resource, FLinearColor::White);
        TileItem.BlendMode = SE_BLEND_Translucent;
        Canvas->DrawItem(TileItem);
    }
}