/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 16-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
1. Encontrar los números primos de la serie Fibonaci de n términos.
--------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int num_terminos, primero = 0, segundo = 1, siguiente, es_primo;

    printf("Ingrese un número: "); scanf("%d", &num_terminos);
	printf("Los números primos en la serie de Fibonacci de %d es: \n", num_terminos);

    for (int i = 0; i < num_terminos; i++) {
        if (i <= 1) {
            siguiente = i;
        } else {
            siguiente = primero + segundo;
            primero = segundo;
            segundo = siguiente;
        }

        es_primo = 1; // Suponemos inicialmente que el número es primo.

        if (siguiente <= 1) {
            es_primo = 0; // No son números primos (0 y 1).
        } else {
            for (int j = 2; j * j <= siguiente; j++) {
                if (siguiente % j == 0) {
                    es_primo = 0; // No es número primo.
                    break;
                }
            }
        }

        if (es_primo) {
            printf("%d ", siguiente);
        }
    }

    printf("\n");

    return 0;
}
