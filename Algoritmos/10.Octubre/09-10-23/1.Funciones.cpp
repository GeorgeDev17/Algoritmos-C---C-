/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 09-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C
    --- Funciones y procedimientos---
 Calcula la suma de dos n�meros y luego imprime el resultado
--------------------------------------------------------------------------------------------------*/
# include <iostream>

using namespace std;

int suma (int a, int b){ // Funci�n suma que toma 2 par�metros enteros (a y b).
	int sum;
	sum = a + b; 
	return sum;	
}
	int main(){
		cout << suma (5, 6); //Impresi�n por consola del resultado.
		return 0;
}
