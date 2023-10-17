/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 07-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C -- Switch 5 Programas --
1. Imprime una matriz de n�meros por consola desde 1 hasta el valor ingresado por teclado.
Por ejemplo: 
Para n = 5
		1   2   3   4   5
		1   2   3   4   5
		1   2   3   4   5
		1   2   3   4   5
		1   2   3   4   5 
2. Imprimir un patr�n de tri�ngulo por consola, donde cada fila aumente 
progresivamente desde 1 hasta un n�mero ingresado por el usuario (tama�o del tri�ngulo).
3. Imprimir un patr�n de tri�ngulo inverso por consola, donde cada fila disminuye desde
un n�mero ingresado por el usuario (tama�o del tri�ngulo) hasta 1.
4. Imprimir un patr�n de tri�ngulo alineando los numeros en el centro, cada fila aumenta
progresivamente desde 1 hasta un n�mero ingresado por el usuario (tama�o del tri�ngulo).
5. Imprimir un patr�n de tri�ngulo alineando los numeros hacia la derecha con espacios en blanco
cada fila va desde 1 hasta un n�mero ingresado por el usuario (tama�o del tri�ngulo).
--------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    int option;
    printf("1. Imprime una matriz de n�meros por consola desde 1 hasta el valor ingresado. \n");
    printf("2. Imprimir un patr�n de tri�ngulo por consola, donde cada fila aumente progresivamente desde 1 hasta un n�mero ingresado.\n");
    printf("3. Imprimir un patr�n de tri�ngulo inverso por consola, donde cada fila disminuye desde un n�mero ingresado por el usuario (tama�o del tri�ngulo) hasta 1.\n");
    printf("4. Imprimir un patr�n de tri�ngulo alineando los n�meros en el centro, cada fila aumenta progresivamente desde 1 hasta un n�mero ingresado por el usuario (tama�o del tri�ngulo).\n");
    printf("5. Imprimir un patr�n de tri�ngulo alineando los n�meros hacia la derecha con espacios en blanco. Cada fila va desde 1 hasta un n�mero ingresado por el usuario (tama�o del tri�ngulo).\n");
    printf("\n Elija el programa que desea ejecutar: ");
    scanf("%d", &option);

    switch (option) {
        case 1: {
            int numero, fila, columna;
            printf("Digite un n�mero: ");
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
            cout << "Digite el tama�o del tri�ngulo: " << endl;
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
            cout << "Digite el tama�o del tri�ngulo: " << endl;
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
            cout << "Digite el tama�o del tri�ngulo: " << endl;
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

            printf("\tDigite un n�mero: ");
            scanf("%d", &numero);
            printf("\n\n");

            fila = 1;
            while (fila <= numero) {
                columna = 1;

                // Imprime espacios en blanco antes de los n�meros para alinearlos
                while (columna < fila) {
                    printf("\t");
                    columna++;
                }

                contador = 1;
                while (contador <= numero - fila + 1) { // Ajustamos la cantidad de n�meros impresos
                    printf("\t%d", contador);
                    contador++;
                }
                printf("\n");
                fila++;
            }
        }
        break;

        default: {
            printf("El n�mero ingresado no se encuentra en el rango de los algoritmos creados.\n");
        }
        break;
    }

    return 0;
}
