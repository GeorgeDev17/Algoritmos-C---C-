/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 30-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
10. Mostrar multiplos de m hasta n.
--------------------------------------------------------------------------------------------------*/
#include <iostream>

int main() {
    int incr, numM, numN;
// Solicitudes al usuario para ingresar valores por teclado
    printf("Ingresa un número para m: "); scanf("%d", &numM);  

    printf("Ingresa un número para n: "); scanf("%d", &numN); 

    printf("Los múltiplos de %d hasta %d son: ", numM, numN);
    
 	if (numM <= numN) {
	incr = numM;  // Inicializa la variable incr con el valor de numM
    while (incr <= numN) {  // El bucle se ejecuta mientras incr sea menor o igual a numN
        printf("%d ", incr);  // Se imprime el valor para multiplo de numM
        incr += numM;  // Se incrementa el valor de incr en numM para obtener el siguiente múltiplo
    	}
    } else {
        printf("No existen múltiplos entre %d y %d\n", numM, numN);
    }

    printf("\n");  

    return 0; 
}
