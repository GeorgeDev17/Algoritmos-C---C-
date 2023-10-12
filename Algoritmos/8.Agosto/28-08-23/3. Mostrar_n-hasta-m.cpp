/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 29-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
3. Mostrar los números de n hasta m
--------------------------------------------------------------------------------------------------*/
#include <iostream>

int main (){
    int incr, numN, numM;
// Solicitudes al usuario para ingresar valores por teclado
    printf("Ingresa un número para n: "); scanf("%d", &numN);  

    printf("Ingresa un número para m: "); scanf("%d", &numM); 

		while (numN <= numM) { // El bucle while se ejecutará mientras n sea menor o igual a m.
			printf ("%d ", numN);
			numN = numN + 1; // Se incrementa el valor de n en 1 para continuar al siguiente número.
		}
	return 0;
}
