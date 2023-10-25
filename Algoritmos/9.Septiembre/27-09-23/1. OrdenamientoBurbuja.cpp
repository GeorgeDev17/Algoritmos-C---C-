/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 27-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C
     Ordenamientos: 
case 1 // llenar
case 2 // ordenar burbuja
case 6 // mostrar
case 0 //salir

--- Ordenamiento burbuja --- 
--------------------------------------------------------------------------------------------------*/
#include <stdio.h> 

int main(){
	int v [10] = {7, 2, 8, 3, 5, 1}, n = 6, i;
	
for (i = 0; i < n - 1; i++){
	for (int j = i + 1; j < n; j++){
		if ( v [i] > v [j]) { // Realiza la comparación 
		 int tem = v [i]; // Si es cierto intercambia los datos
		 v [i] = v [j];
		 v [j] = tem;
		}
	}
}
	
	return 0;
}
