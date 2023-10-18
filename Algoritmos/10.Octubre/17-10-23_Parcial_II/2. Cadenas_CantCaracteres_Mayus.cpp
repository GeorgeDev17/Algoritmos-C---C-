/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 17-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C 
Problema 2: -- Cadenas --

Crear un programa que le solicite al usuario que ingrese una cadena.
cuando ejecute el programa debe mostrar la cantidad de caracteres 
de la cadena y debe mostrar la cadena en mayúscula.
--------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[100]; // Cadena de caracteres con tamaño máximo 100
    int longitud, i;


    // Solicitar al usuario que ingrese una cadena
	printf("Por favor, introduzca una palabra o frase: ");
    
	/* fgets nos permite leer una línea completa con espacios
	   en una cadena de caracteres */
    fgets(cadena, sizeof(cadena), stdin);
    
    /* función strlen() de la biblioteca string.h
	   para calcular la longitud de la cadena ingresada */
    longitud = strlen(cadena);

    // Mostrar en pantalla la longitud de la cadena
    printf("La longitud de la cadena es: %d caracteres \n", longitud);

    /* función toupper() de la biblioteca ctype.h
	   para convertir la cadena a mayúsculas */
    for (i = 0; i < longitud; i++) {
        cadena[i] = toupper(cadena[i]);
    }

    // Impresión por consola de la cadena en mayúsculas
    printf("La cadena en mayusculas es: %s \n", cadena);

    return 0;
}
