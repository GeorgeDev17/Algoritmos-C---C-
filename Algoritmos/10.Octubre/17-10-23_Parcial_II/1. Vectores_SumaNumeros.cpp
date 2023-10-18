/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 17-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C 
Problema 1: -- Vectores --

Crear un programa donde le indique al usuario ingresar una serie de 
números, los almacena en un vector, calcula la suma de esos números 
y muestra el resultado.
--------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Solicitar al usuario la cantidad de números
    printf("Ingrese la cantidad de números: "); scanf("%d", &n);
    
    // Declarar un vector de tamaño n
    int numeros[n];
    
    // Solicitar al usuario los números y almacenarlos en el vector
    for (i = 0; i < n; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        // Sumar los números--Cantidad total
        sum += numeros[i];
    }
    
    // Mostrar la suma
    printf("La suma de los números ingresados es: %d \n", sum);
    
    return 0;
}
