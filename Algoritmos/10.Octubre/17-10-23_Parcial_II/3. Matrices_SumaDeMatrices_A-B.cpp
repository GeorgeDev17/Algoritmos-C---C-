/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 17-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C 
Problema 3: -- Matrices --

Crear un programa donde le solicita al usuario las dimensiones de 
las matrices (filas y columnas), luego ingresar elementos para las 
matrices A y B. Después, suma las matrices A y B para obtener la matriz C.
--------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int filas, columnas, i, j;

    // Solicitud de las dimensiones de la matriz
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    /* Declaración de las matrices A, B y C 
	con las dimensiones proporcionadas*/
    int matrizA[filas][columnas], matrizB[filas][columnas], matrizC[filas][columnas];

    // Solicitar al usuario los elementos para la matriz A
    printf("Ingrese los elementos de la matriz A:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese el elemento para A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Solicitar al usuario los elementos para la matriz B
    printf("Ingrese los elementos para la matriz B:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese el elemento para B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Sumar las matrices A y B para obtener la matriz C
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Mostrar la matriz resultante (matriz C)
    printf("La matriz resultante (C = A + B) es:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
