/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 07-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++ 
Imprimir un patr�n de tri�ngulo por consola, donde cada fila aumente 
progresivamente desde 1 hasta un n�mero ingresado por el usuario (tama�o del tri�ngulo).

--------------------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main (int argc, char** argv){ // Funci�n principal que toma argumentos de l�nea de comandos.
    int filas, columnas,tamanho;
    filas = 0; //Inicializa la variable filas en 0.
    cout << "Digite el tama�o del triangulo: " << endl; cin >> tamanho;
    cout << endl;
    
    while (filas < tamanho){
        columnas =0;
// Inicia un bucle while interno que se ejecutar� mientras columnas sea menor o igual que filas.
        while (columnas <= filas){ 
// Imprime el valor de columnas incrementado en 1, representando el n�mero de fila actual.
            cout << columnas + 1 ;
            columnas = columnas + 1;
        }
        cout << endl;
        filas = filas + 1;
    }
    return 0;
}
