/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 07-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++ Sentencia Switch
4. Imprimir un patr�n de tri�ngulo alineando los numeros en el centro, cada fila aumenta
progresivamente desde 1 hasta un n�mero ingresado por el usuario (tama�o del tri�ngulo).
--------------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int filas, columnas, tamanho;
    filas = 0;
    cout << "Digite el tama�o del tri�ngulo: " << endl;cin >> tamanho;
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
