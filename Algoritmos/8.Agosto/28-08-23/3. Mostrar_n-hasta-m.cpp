/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 29-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
3. Mostrar los n�meros de n hasta m
--------------------------------------------------------------------------------------------------*/
#include <iostream>

int main (){
    int incr, numN, numM;
// Solicitudes al usuario para ingresar valores por teclado
    printf("Ingresa un n�mero para n: "); scanf("%d", &numN);  

    printf("Ingresa un n�mero para m: "); scanf("%d", &numM); 

		while (numN <= numM) { // El bucle while se ejecutar� mientras n sea menor o igual a m.
			printf ("%d ", numN);
			numN = numN + 1; // Se incrementa el valor de n en 1 para continuar al siguiente n�mero.
		}
	return 0;
}
