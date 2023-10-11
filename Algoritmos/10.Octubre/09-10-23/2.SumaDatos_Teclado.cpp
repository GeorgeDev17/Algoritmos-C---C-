/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 09-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C
    --- Funciones y procedimientos---
 Calcula la suma de dos números ingresados por teclado
	y luego imprime su resultado.
--------------------------------------------------------------------------------------------------*/
# include <stdio.h>

using namespace std;

int sumaDatos (int num1,int num2){ // Función que toma 2 valores enteros y los suma
	int suma;
	suma = num1 + num2; 
	return suma;	
}
	int main(){ // Función principal
	
		int n, m;
		printf ("Digite el primer número: "); //Solicitud ingreso de valores por teclado.
		scanf ("%d", &n);
		printf ("Digite el segundo número: "); 
		scanf ("%d", &m);
		printf ("La suma de ambos números es igual a: %d", sumaDatos(n,m)); //Impresión por consola del resultado.
		
		return 0;
}
