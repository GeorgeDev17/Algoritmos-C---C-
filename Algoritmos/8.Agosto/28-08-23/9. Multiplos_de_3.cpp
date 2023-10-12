/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 30-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
9. Mostrar multiplos de 3 hasta n.
--------------------------------------------------------------------------------------------------*/
#include <iostream>

int main() {
    int num, incr = 3;

    printf("Ingresa un número n: "); scanf("%d", &num);
    printf("Los múltiplos de 3 hasta %d son: ", num);
    while (incr <= num) {
/* Imprime los múltiplos de 3, se agrego un espacio en la secuencia de escape "%d ", 
esto lográ que se impriman los valores en una misma linea separados por un espacio.*/
        printf("%d ", incr);  
        incr += 3;  // Incrementa el valor de i en 3 para obtener el siguiente múltiplo
	}

    printf("\n");

    return 0;
}
