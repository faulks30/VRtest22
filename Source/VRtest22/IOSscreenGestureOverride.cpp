// Fill out your copyright notice in the Description page of Project Settings.


#include "IOSscreenGestureOverride.h"

// Sets default values for this component's properties
UIOSscreenGestureOverride::UIOSscreenGestureOverride()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UIOSscreenGestureOverride::BeginPlay()
{
	Super::BeginPlay();

#if PLATFORM_IOS
//    [self setNeedsUpdateOfScreenEdgesDeferringSystemGestures];
//}
//
//- (UIRectEdge)preferredScreenEdgesDeferringSystemGestures
//{
//    return UIRectEdgeAll;
//}
#endif

}


// Called every frame
void UIOSscreenGestureOverride::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

