/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 09-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C
    --- Funciones y procedimientos---
 Calcula la suma de dos n�meros ingresados por teclado
	y luego imprime su resultado.
--------------------------------------------------------------------------------------------------*/
# include <stdio.h>

using namespace std;

int sumaDatos (int num1,int num2){ // Funci�n que toma 2 valores enteros y los suma
	int suma;
	suma = num1 + num2; 
	return suma;	
}
	int main(){ // Funci�n principal
	
		int n, m;
		printf ("Digite el primer n�mero: "); //Solicitud ingreso de valores por teclado.
		scanf ("%d", &n);
		printf ("Digite el segundo n�mero: "); 
		scanf ("%d", &m);
		printf ("La suma de ambos n�meros es igual a: %d", sumaDatos(n,m)); //Impresi�n por consola del resultado.
		
		return 0;
}
