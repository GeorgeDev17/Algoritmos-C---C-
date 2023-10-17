/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 16-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
5. Generar la palabra "Hola mundo" aleatoriamente.
--------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    // Generador de números aleatorios (Inicialización).
    srand(time(NULL));

    char palabra[] = "Hola Mundo"; // Agregamos la cadena original.

    int longitud = strlen(palabra); // Obtenemos la longitud de cadena original.

    // Mezclamos los caracteres aleatoriamente. 
    for (int i = 0; i < longitud - 1; i++) {
        int j = i + rand() % (longitud - i);
        // Intercambiamos dichos caracteres
        char temp = palabra[i];
        palabra[i] = palabra[j];
        palabra[j] = temp;
    }
	// Salida por consola
    printf("%s\n", palabra);

    return 0;
}
