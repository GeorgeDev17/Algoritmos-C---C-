/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 17-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C 
Problema 1: -- Vectores --

Crear un programa donde le indique al usuario ingresar una serie de 
n�meros, los almacena en un vector, calcula la suma de esos n�meros 
y muestra el resultado.
--------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Solicitar al usuario la cantidad de n�meros
    printf("Ingrese la cantidad de n�meros: "); scanf("%d", &n);
    
    // Declarar un vector de tama�o n
    int numeros[n];
    
    // Solicitar al usuario los n�meros y almacenarlos en el vector
    for (i = 0; i < n; i++) {
        printf("Ingrese el n�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        // Sumar los n�meros--Cantidad total
        sum += numeros[i];
    }
    
    // Mostrar la suma
    printf("La suma de los n�meros ingresados es: %d \n", sum);
    
    return 0;
}
