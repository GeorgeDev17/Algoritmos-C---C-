/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 07-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C -- Switch 5 Programas --
1. Imprime una matriz de números por consola desde 1 hasta el valor ingresado por teclado.
Por ejemplo: 
Para n = 5
		1   2   3   4   5
		1   2   3   4   5
		1   2   3   4   5
		1   2   3   4   5
		1   2   3   4   5 
2. Imprimir un patrón de triángulo por consola, donde cada fila aumente 
progresivamente desde 1 hasta un número ingresado por el usuario (tamaño del triángulo).
3. Imprimir un patrón de triángulo inverso por consola, donde cada fila disminuye desde
un número ingresado por el usuario (tamaño del triángulo) hasta 1.
4. Imprimir un patrón de triángulo alineando los numeros en el centro, cada fila aumenta
progresivamente desde 1 hasta un número ingresado por el usuario (tamaño del triángulo).
5. Imprimir un patrón de triángulo alineando los numeros hacia la derecha con espacios en blanco
cada fila va desde 1 hasta un número ingresado por el usuario (tamaño del triángulo).
--------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    int option;
    printf("1. Imprime una matriz de números por consola desde 1 hasta el valor ingresado. \n");
    printf("2. Imprimir un patrón de triángulo por consola, donde cada fila aumente progresivamente desde 1 hasta un número ingresado.\n");
    printf("3. Imprimir un patrón de triángulo inverso por consola, donde cada fila disminuye desde un número ingresado por el usuario (tamaño del triángulo) hasta 1.\n");
    printf("4. Imprimir un patrón de triángulo alineando los números en el centro, cada fila aumenta progresivamente desde 1 hasta un número ingresado por el usuario (tamaño del triángulo).\n");
    printf("5. Imprimir un patrón de triángulo alineando los números hacia la derecha con espacios en blanco. Cada fila va desde 1 hasta un número ingresado por el usuario (tamaño del triángulo).\n");
    printf("\n Elija el programa que desea ejecutar: ");
    scanf("%d", &option);

    switch (option) {
        case 1: {
            int numero, fila, columna;
            printf("Digite un número: ");
            scanf("%d", &numero);
            printf("\n");

            fila = 1;

            while (fila <= numero) {
                columna = 1;

                while (columna <= numero) {
                    printf("\t%d", columna);
                    columna++;
                }

                printf("\n");
                fila++;
            }
        }
        break;

        case 2: {
            int filas, columnas, tamanho;
            filas = 0;
            cout << "Digite el tamaño del triángulo: " << endl;
            cin >> tamanho;
            cout << endl;

            while (filas < tamanho) {
                columnas = 0;
                while (columnas <= filas) {
                    cout << columnas + 1 ;
                    columnas = columnas + 1;
                }
                cout << endl;
                filas = filas + 1;
            }
        }
        break;

        case 3: {
            int filas, columnas, tamanho;
            filas = 0;
            cout << "Digite el tamaño del triángulo: " << endl;
            cin >> tamanho;
            cout << endl;

            while (filas < tamanho) {
                columnas = tamanho;
                while (columnas > filas) {
                    cout << columnas;
                    columnas = columnas - 1;
                }
                cout << endl;
                filas = filas + 1;
            }
        }
        break;

        case 4: {
            int filas, columnas, tamanho;
            filas = 0;
            cout << "Digite el tamaño del triángulo: " << endl;
            cin >> tamanho;
            cout << endl;

            while (filas < tamanho) {
                columnas = 0;
                while (columnas < tamanho - filas - 1) {
                    cout << " ";
                    columnas++;
                }

                columnas = 0;
                while (columnas <= filas) {
                    cout << columnas + 1;
                    columnas = columnas + 1;
                }
                cout << endl;
                filas = filas + 1;
            }
        }
        break;

        case 5: {
            int numero, fila, columna, contador;

            printf("\tDigite un número: ");
            scanf("%d", &numero);
            printf("\n\n");

            fila = 1;
            while (fila <= numero) {
                columna = 1;

                // Imprime espacios en blanco antes de los números para alinearlos
                while (columna < fila) {
                    printf("\t");
                    columna++;
                }

                contador = 1;
                while (contador <= numero - fila + 1) { // Ajustamos la cantidad de números impresos
                    printf("\t%d", contador);
                    contador++;
                }
                printf("\n");
                fila++;
            }
        }
        break;

        default: {
            printf("El número ingresado no se encuentra en el rango de los algoritmos creados.\n");
        }
        break;
    }

    return 0;
}
