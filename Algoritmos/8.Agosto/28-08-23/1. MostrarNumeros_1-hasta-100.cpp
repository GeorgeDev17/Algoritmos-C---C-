/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 29-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
1. Mostrar n�meros del 1 al 100
--------------------------------------------------------------------------------------------------*/
#include <iostream>  

int main() {
    int incr = 1, num = 100;  // Declaraci�n de variables con valores definidos rango inicio 1 y 100 final.
    
    while (incr <= num) {  // El bucle while se ejecutar� mientras incr sea menor o igual a num
        printf("%d\n", incr);  // Imprimir el valor actual de incr en la consola seguido de un salto de l�nea
        incr = incr + 1;  // Se incrementa el valor de incr en 1 en cada iteraci�n del bucle.
    }
    return 0;
}
