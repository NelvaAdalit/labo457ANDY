// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxColider.h"
#include"AsignarMalla.h"
#include"Shape.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"



void ABoxColider::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("comienzo el objeto")); // Mostrar mensaje en pantalla
	OnActorBeginOverlap.AddDynamic(this, &ABoxColider::colisionar);
	//OnActorBeginOverlap.AddDynamic(this, &ABoxColider::OnOverlapBegin);

}

void ABoxColider::colisionar(AActor* objetoA, AActor* objetoB)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("hubo colision"));

	// Mostrar los nombres de los objetos que colisionaron
	FString NombreObjetoA = objetoA->GetName();
	FString NombreObjetoB = objetoB->GetName();
	FString Mensaje = FString::Printf(TEXT("Hubo colision entre %s y %s"), *NombreObjetoA, *NombreObjetoB);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Mensaje);

	// Mover todos los objetos de tipo AAsignarMalla
	MoverTodosLosAsignarMalla();
	// Crear una hilera de objetos
	FVector PosicionInicial = GetActorLocation();
	FRotator Rotacion = FRotator::ZeroRotator;
	FActorSpawnParameters SpawnParams;

	int NumeroDeObjetos = 5; // Número de objetos en la hilera
	float DistanciaEntreObjetos = 400.0f; // Distancia entre cada objeto

	/*for (int i = 0; i < NumeroDeObjetos; i++)
	{
		FVector PosicionNueva = PosicionInicial + FVector(DistanciaEntreObjetos * i, 0.0f, 0.0f);
		AAsignarMalla* NuevoShapeActor = GetWorld()->SpawnActor<AAsignarMalla>(PosicionNueva, Rotacion, SpawnParams);

		if (NuevoShapeActor)
		{
			//NuevoShapeActor->mover(); // Llamamos a la función mover() en el nuevo actor
			NuevoShapeActor->CambiarMallaSegunColisiones();
		}
	}*/
	for (int i = 0; i < NumeroDeObjetos; i++)
	{
		FVector PosicionNueva = PosicionInicial + FVector(DistanciaEntreObjetos * i, 0.0f, 0.0f);
		AAsignarMalla* NuevoShapeActor = GetWorld()->SpawnActor<AAsignarMalla>(PosicionNueva, Rotacion, SpawnParams);

		if (NuevoShapeActor)
		{
			NuevoShapeActor->CambiarMallaSegunColisiones();
		}
	}
}
void ABoxColider::MoverTodosLosAsignarMalla()
{
	TArray<AActor*> Actores;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAsignarMalla::StaticClass(), Actores);

	for (AActor* Actor : Actores)
	{
		AAsignarMalla* AsignarMallaActor = Cast<AAsignarMalla>(Actor);
		if (AsignarMallaActor)
		{
			//AsignarMallaActor->mover();
			AsignarMallaActor->saltar();
		}
	}
}