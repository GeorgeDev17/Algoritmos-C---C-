/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 29-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
2. Mostrar números del 100 al 1
--------------------------------------------------------------------------------------------------*/
#include <iostream>  

int main() {
    int incr = 1, num = 100;  // Declaración de variables con valores definidos rango inicio 1 y 100 final.
    
    while (incr <= num) {  // El bucle while se ejecutará mientras incr sea menor o igual a num
        printf("%d\n", incr);  // Imprimir el valor actual de incr en la consola seguido de un salto de línea
        incr = ++incr;  // Se decrementa el valor de incr en 1 en cada iteración del bucle.
    }
    return 0;
}
