// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Components/StaticMeshComponent.h"//es primero
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "BoxColider.generated.h"

/**
 *
 */
UCLASS()
class LABO457_API ABoxColider : public ATriggerBox
{
	GENERATED_BODY()
public:
	//ABoxColider();

	virtual void BeginPlay();
	//UFUNCTION()
	//void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
	UFUNCTION()//sin esto no funciona la llamada 	
		void colisionar(class AActor* objetoA, class AActor* objetoB);
	UFUNCTION()
	void MoverTodosLosAsignarMalla();
	//UPROPERTY(VisibleAnywhere);
	//class UBoxComponent* BoxComponent;


};