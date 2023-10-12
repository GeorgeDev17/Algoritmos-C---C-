/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 23-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
Crear un programa que muestre un menú de cajero automático. 
--------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
		setlocale (LC_CTYPE, "Spanish");
	int opcion;
	printf ("Bienvenido al cajero automático: \n\n");
	printf ("Ingrese la opción que desea validar: \n");
	printf ("1. Consignaciones: \n");
	printf ("2. Retiro de dinero: \n");
	printf ("3. Pago de servicios: \n");
	printf ("4. Cambio de clave: \n");
	printf ("5. Consulta de saldo: \n");
	scanf ("%d", opcion);
	
	switch (opcion){
		case 1: 
			printf ("Ha seleccinado la opción de consignaciones.");
		case 2: 
			printf ("Ha seleccinado la opción de retiro de dinero.");
		case 3: 
			printf ("Ha seleccinado la opción de pago de servicios.");
		case 4: 
			printf ("Ha seleccinado la opción de cambio de clave.");
		case 5: 
			printf ("Ha seleccinado la opción de consulta de saldo.");
	}
	return 0;
}
