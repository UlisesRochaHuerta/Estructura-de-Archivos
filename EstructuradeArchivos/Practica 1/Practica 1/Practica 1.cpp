/*
Usando el lenguaje de la programación C
Haga un programa con las siguientes reglas:

1.- Que tenga una estructura llamada Empleado
y los atributos:
	nombre
	numeroDeEmpleado
	edad
	numeroDeSeguro.

2.- Que le pida los datos al usuario,
cree la estructura.
3.- Que guarde los datos en un
archivo llamado empleados.txt
*/

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fstream>


using namespace std;

int main(){
	struct{
		//string name;
		char name[20];
		int   numeroDeEmpleado;
		int edad;
		int numeroDeSeguro;
	} Empleado;


	printf("Ingrese el nombre de el Empleado: ");
	gets_s(Empleado.name);
	printf("Ingrese el numero de el Empleado: ");
	scanf_s("%d",&Empleado.numeroDeEmpleado);
	printf("Ingresa la edad de el Empleado: ");
	scanf_s("%d",&Empleado.edad);
	printf("Ingrese el numero de seguro de el Empleado: ");
	scanf_s("%d",&Empleado.numeroDeSeguro);


	//MUESTRA LOS DATOS
	printf("\nel nombre es: %s ", Empleado.name);
	printf("\nel numero de empleado es %d ", Empleado.numeroDeEmpleado);
	printf("\nLa edad es %d ",Empleado.edad);
	printf("\nEl numero de seguro es %d ", Empleado.numeroDeSeguro);
	printf("\n\n\n");
	
	
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar