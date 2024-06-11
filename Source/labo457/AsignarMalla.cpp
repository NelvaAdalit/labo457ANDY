// Fill out your copyright notice in the Description page of Project Settings.

#include "BoxColider.h"
#include "AsignarMalla.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
TArray<UStaticMesh*>AAsignarMalla::MeshArray;//anadido//para iniciar antes 
// Sets default values
AAsignarMalla::AAsignarMalla()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	////////////////////////////////
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Controlador"));
	RootComponent = Root;

	malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Mesh"));
	//malla->AttachTo(Root);
	malla->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);

	AsignarMalla();
	NumColisiones = 0; // Inicialización del contador de colisiones
 // Registrar el evento de colisión
	malla->OnComponentHit.AddDynamic(this, &AAsignarMalla::OnMeshHit);

}

// Called when the game starts or when spawned
void AAsignarMalla::BeginPlay()
{
	Super::BeginPlay();
 AAsignarMalla::mover();
}

// Called every frame
void AAsignarMalla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//
	 AAsignarMalla::mover();
}


void AAsignarMalla::AsignarMalla()
{//una forma como el ing lo hizo en el lab
	UStaticMesh* Disfraz1, * Disfraz2, * Disfraz3, * Disfraz4, * Disfraz5;

	Disfraz1 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Props/SM_Couch.SM_Couch")));

	Disfraz2 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Props/SM_Chair.SM_Chair")));

	Disfraz3 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Props/SM_TableRound.SM_TableRound")));

	Disfraz4 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Props/SM_Lamp_Wall.SM_Lamp_Wall")));

	Disfraz5 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(),
		NULL, TEXT("/Game/StarterContent/Props/SM_CornerFrame.SM_CornerFrame")));
	//'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'
	MeshArray.Add(Disfraz1);
	MeshArray.Add(Disfraz2);
	MeshArray.Add(Disfraz3);
	MeshArray.Add(Disfraz4);
	MeshArray.Add(Disfraz5);

	CambiarMallaSegunColisiones();
	//int Random = FMath::RandRange(0, 4);//contado menos -1 para evitar en crasheo
	//malla->SetStaticMesh(MeshArray[Random]);

}
void AAsignarMalla::mover()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("comienzo del movimiento"));//delogear emitir mensaje en la pantalla
	// Implementación del movimiento del actor
	SetActorLocation(GetActorLocation() + FVector(10.0f, 0.0f, 0.0f));
}
void AAsignarMalla::MoverTodosLosActores()
{
	TArray<AActor*> Actores;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAsignarMalla::StaticClass(), Actores);

	for (AActor* Actor : Actores)
	{
		AAsignarMalla* MiActor = Cast<AAsignarMalla>(Actor);
		if (MiActor)
		{
			//MiActor->mover();
			MiActor->saltar();
		}
	}
}
void AAsignarMalla::saltar()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("comienzo del salto"));//delogear emitir mensaje en la pantalla
	//malla->habilitarfisicas(true);
	//malla->AddForce(FVector::UpVector);
	  // Habilitar la simulación de física en el componente
	malla->SetSimulatePhysics(true);

	FVector Impulse = FVector(0.0f, 0.0f, 500.0f);
	malla->AddImpulse(Impulse);
}
void AAsignarMalla::destroyAsignarMalla()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("se destruye"));
	Destroy();
}
void AAsignarMalla::CambiarMallaSegunColisiones()
{
	int RandomIndex = 0;

	if (NumColisiones == 0)
	{
		RandomIndex = FMath::RandRange(0, MeshArray.Num() - 1);
	}
	else if (NumColisiones == 1)
	{
		// Mover todos los objetos
		 //mover();
		MoverTodosLosActores();
		//saltar();
	   //Destroy();
		return; // Salir de la función sin cambiar la malla
	}
	else if (NumColisiones == 2)
	{

		RandomIndex = FMath::RandRange(0, 2);// Solo cambiar a un tipo de malla
		//saltar();
		Destroy();
		return;

	}
	else if (NumColisiones == 3)
	{
		//saltar();
		//mover();
		//Destroy();
		return;
	}
	else if (NumColisiones == 4)
	{
		//mover();
	   //RandomIndex = FMath::RandRange(0, 2);// Solo cambiar a un tipo de malla
	   //Destroy();
	   //saltar();
		return;
	}

	malla->SetStaticMesh(MeshArray[RandomIndex]);
}
// Función que se llama cuando hay una colisión
void AAsignarMalla::OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	NumColisiones++;
	FString Mensaje = FString::Printf(TEXT("contador %d"), NumColisiones);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Mensaje);

	CambiarMallaSegunColisiones();
}