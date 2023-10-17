/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 07-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++ 
Imprimir un patrón de triángulo por consola, donde cada fila aumente 
progresivamente desde 1 hasta un número ingresado por el usuario (tamaño del triángulo).

--------------------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main (int argc, char** argv){ // Función principal que toma argumentos de línea de comandos.
    int filas, columnas,tamanho;
    filas = 0; //Inicializa la variable filas en 0.
    cout << "Digite el tamaño del triangulo: " << endl; cin >> tamanho;
    cout << endl;
    
    while (filas < tamanho){
        columnas =0;
// Inicia un bucle while interno que se ejecutará mientras columnas sea menor o igual que filas.
        while (columnas <= filas){ 
// Imprime el valor de columnas incrementado en 1, representando el número de fila actual.
            cout << columnas + 1 ;
            columnas = columnas + 1;
        }
        cout << endl;
        filas = filas + 1;
    }
    return 0;
}
