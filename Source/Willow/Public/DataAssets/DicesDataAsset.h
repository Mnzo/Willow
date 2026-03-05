// 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DicesDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class WILLOW_API UDicesDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visuals|UI")	
	TArray<UTexture2D*> DicesIcons;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visuals|Materials")
	TArray<UMaterialInstance*> DicesMaterials;
};
