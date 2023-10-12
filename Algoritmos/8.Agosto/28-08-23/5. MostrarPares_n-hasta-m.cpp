/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 29-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
5. Mostrar los números pares de n hasta m
--------------------------------------------------------------------------------------------------*/
#include <iostream>

int main (){
	int n = 0, m = 6;

		while (n <= m) { // El bucle while se ejecutará mientras n sea menor o igual a m.
			if(n % 2 == 0){ // Verifica si n es par, si el residuo es igual a cero.
				printf ("%d ", n);
			}
			n++; //Se incrementa el valor de n en 1 en cada iteración del bucle.
		}
	return 0;
}
