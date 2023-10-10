/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 09-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C
    --- Funciones y procedimientos---
 Calcula la suma de dos números y luego imprime el resultado.
--------------------------------------------------------------------------------------------------*/
# include <iostream>

using namespace std;

int suma (int a, int b){ // Función suma que toma 2 parámetros enteros (a y b).
	int sum;
	sum = a + b; 
	return sum;	
}
	int main(){
		cout << suma (5, 6); //Impresión por consola del resultado.
		return 0;
}
