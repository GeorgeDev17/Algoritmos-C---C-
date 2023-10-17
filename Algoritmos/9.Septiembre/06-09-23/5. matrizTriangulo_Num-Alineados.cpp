/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 07-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++ Sentencia Switch
5. Imprimir un patr�n de tri�ngulo alineando los numeros hacia la derecha con espacios en blanco
cada fila va desde 1 hasta un n�mero ingresado por el usuario (tama�o del tri�ngulo).
--------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <locale.h>

int main() {
    setlocale (LC_CTYPE, "Spanish");
    int numero, fila, columna, contador;
    
    printf("\tDigite un n�mero: "); scanf("%d", &numero);
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

    return 0;
}
