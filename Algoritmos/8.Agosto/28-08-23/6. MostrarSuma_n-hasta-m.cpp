/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 29-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
6. Mostrar la suma de los numeros pares de n hasta m.
--------------------------------------------------------------------------------------------------*/
#include <iostream>

int main() {
   int n, m, sum = 0;  /* Declaraci�n de variables. 
	la variable sum se inicializa a 0 para acumular la suma de los n�meros pares.
	Se solicita al usuario ingresar el valor inicial para n y para m y se usa scanf para almacenar estos valores.*/
    printf("Ingresa el valor inicial para n: \n"); scanf("%d", &n);  
    
    printf("Ingresa el valor final para m: \n"); scanf("%d", &m); 
    
    while (n <= m) {  // El bucle while se ejecutar� mientras n sea menor o igual a m.
        if (n % 2 == 0) {  // Verifica si el n�mero actual de la variable n es par.
            printf("%d ", n); 
            sum = sum + n;  // Agrega el n�mero par actual a la suma acumulada.
        }
        n = n + 1;  //Se incrementa el valor de n en 1 para continuar al siguiente n�mero.
    }
    printf("\n La suma de los n�meros pares es: %d\n", sum);
    return 0; 
}
