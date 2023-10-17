/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 07-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++ 
3. Imprimir un patr�n de tri�ngulo inverso por consola, donde cada fila disminuye desde
un n�mero ingresado por el usuario (tama�o del tri�ngulo) hasta 1.
--------------------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main (int argc, char** argv){
    int filas,columnas,tamanho;
    filas = 0;
    cout << "Digite el tama�o del triangulo: "<< endl; cin >> tamanho;
    cout << endl;
    
    while (filas < tamanho){
        columnas = tamanho;
        while (columnas > filas){
            cout << columnas;
            columnas = columnas - 1;
        }
        cout << endl;
        filas = filas + 1;
    }
    return 0;
}
