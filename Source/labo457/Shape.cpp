// Fill out your copyright notice in the Description page of Project Settings.


#include "Shape.h"

// Sets default values
AShape::AShape()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//anadido
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Controlador"));
	RootComponent = Root;

	malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Mesh"));
	malla->AttachTo(Root);
	int velocity;
	velocity = 100; // declarada
	//==========================================================
	//norte = 1 , sur = 2 , este = 3 , oeste = 4
	direccion = 4;//si cambias la dirrecion se nueve a otro lado
	//=========================================================
	 //inicializacion de los componentes del movimiento senosoidal  
	Amplitude = 20.0f; //inicializacion de la amplitud 
	Frecuencia = 1.0f; // Valor  inical de la frecuencia
	desfase = 1.0f; // Valor predeterminado del desfase (en radianes)
	InitialY = 0.0f; // Valor inicial para la posición en el eje Y
	RunningTime = 1.0f;

}

// Called when the game starts or when spawned
void AShape::BeginPlay()
{
	Super::BeginPlay();
	PoscionY = 300.0f;
	// Guardar la posición inicial en Y
	InitialY = GetActorLocation().Y;
	RunningTime = GetActorLocation().X;
	InitialPosition = GetActorLocation();
	TargetPosition = FVector(InitialPosition.X, InitialPosition.Y + PoscionY, InitialPosition.Z);

}

// Called every frame
void AShape::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Calcular la nueva posición en Y usando un movimiento sinusoidal

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin((RunningTime + DeltaTime) * Frecuencia + desfase) - FMath::Sin(RunningTime * Frecuencia + desfase)) * Amplitude; // Calcula el cambio en la altura
	NewLocation.X += DeltaHeight; // Añade el cambio a la posición actual
	NewLocation.Y += 1;//anadido por el ing 
	RunningTime += DeltaTime;// Actualiza el tiempo de ejecución
	//SetActorLocation(NewLocation);
	// vuelve
	if (NewLocation.Y >= TargetPosition.Y)
	{
		NewLocation.Y = InitialPosition.Y;
	}
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);

}

void AShape::mover(float deltaTime)
{
	/*sobre carga del deltatime
	FVector CurrentLocation = GetActorLocation();
	FVector NewLocation;

	if (direccion == 1) // Norte
	{
		NewLocation = CurrentLocation + FVector(0.0f, velocity * DeltaTime, 0.0f);
	}
	else if (direccion == 2) // Sur
	{
		NewLocation = CurrentLocation + FVector(0.0f, (-1) * velocity * DeltaTime, 0.0f);
	}
	else if (direccion == 3) // Este
	{
		NewLocation = CurrentLocation + FVector(velocity * DeltaTime, 0.0f, 0.0f);
	}
	else if (direccion == 4) // Oeste
	{
		NewLocation = CurrentLocation + FVector((-1) * velocity * DeltaTime, 0.0f, 0.0f);
	}

	SetActorLocation(NewLocation);*/
}

///
