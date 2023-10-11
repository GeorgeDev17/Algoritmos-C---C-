/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 09-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C
    --- Funciones y procedimientos---
Intercambio de valores de 2 variables enteras.
--------------------------------------------------------------------------------------------------*/
#include <stdio.h>

void cambio (int &x, int &y){
/* Dentro de la función, los valores de 'x' y 'y' se intercambian 
utilizando una variable auxiliar 'aux' */
	int aux;
	aux = x;
	x = y; 
	y = aux;
}

int main (){
	int a = 50;
	int b = 32; 
	printf ("%i, %i\n\n", a, b);
	cambio (a, b);
	printf ("%i, %i", a, b);
}
