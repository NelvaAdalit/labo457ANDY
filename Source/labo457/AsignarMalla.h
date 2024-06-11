// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AsignarMalla.generated.h"


UCLASS()
class LABO457_API AAsignarMalla : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAsignarMalla();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	void AsignarMalla();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* malla;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	int32 NumColisiones;
	bool bShouldMove;

	UFUNCTION()
	void OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	UFUNCTION()
	void CambiarMallaSegunColisiones();

	UFUNCTION()
	void saltar();

	UFUNCTION()
	void mover();
	UFUNCTION()
	void MoverTodosLosActores();

	UFUNCTION()
	void destroyAsignarMalla();
private:
	static TArray<UStaticMesh*>MeshArray;


};