// 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ColorsDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class WILLOW_API UColorsDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Colors|UI")
	FLinearColor ActiveCombinationColor;
};
