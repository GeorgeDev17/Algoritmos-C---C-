/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 29-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
6. Mostrar la suma de los numeros pares de n hasta m.
--------------------------------------------------------------------------------------------------*/
#include <iostream>

int main() {
   int n, m, sum = 0;  /* Declaración de variables. 
	la variable sum se inicializa a 0 para acumular la suma de los números pares.
	Se solicita al usuario ingresar el valor inicial para n y para m y se usa scanf para almacenar estos valores.*/
    printf("Ingresa el valor inicial para n: \n"); scanf("%d", &n);  
    
    printf("Ingresa el valor final para m: \n"); scanf("%d", &m); 
    
    while (n <= m) {  // El bucle while se ejecutará mientras n sea menor o igual a m.
        if (n % 2 == 0) {  // Verifica si el número actual de la variable n es par.
            printf("%d ", n); 
            sum = sum + n;  // Agrega el número par actual a la suma acumulada.
        }
        n = n + 1;  //Se incrementa el valor de n en 1 para continuar al siguiente número.
    }
    printf("\n La suma de los números pares es: %d\n", sum);
    return 0; 
}
