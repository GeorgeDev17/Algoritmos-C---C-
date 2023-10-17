/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 07-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++ Sentencia Switch
4. Imprimir un patrón de triángulo alineando los numeros en el centro, cada fila aumenta
progresivamente desde 1 hasta un número ingresado por el usuario (tamaño del triángulo).
--------------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int filas, columnas, tamanho;
    filas = 0;
    cout << "Digite el tamaño del triángulo: " << endl;cin >> tamanho;
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
    return 0;
}
