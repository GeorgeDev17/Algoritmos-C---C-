/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 06-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++ 
Imprime una matriz de números por consola desde 1 hasta el valor ingresado por teclado.
Por ejemplo: 
Para n = 5
		1   2   3   4   5
		1   2   3   4   5
		1   2   3   4   5
		1   2   3   4   5
		1   2   3   4   5 
--------------------------------------------------------------------------------------------------*/
#include <iostream> 

int main() {  
    int numero, fila, columna;  
    printf("Digite un número:"); 
    scanf("%d", &numero);  
    printf("\n");  

    fila = 1; 

    while (fila <= numero) {  // Inicia un bucle while que se ejecutará mientras fila sea menor o igual que el número ingresado.
        columna = 1;  // Inicializa la variable columna en 1 que se utilizará para contar las columnas en cada fila.

        while (columna <= numero) {  // Inicia un bucle while interno que se ejecutará mientras columna sea menor o igual que el número ingresado.
            printf("\t%d", columna);  // Imprime el valor de columna con formato tabulado.
            columna++;  // Incrementa el valor de columna en 1 para pasar a la siguiente columna.
        }

        printf("\n");  // Imprime una nueva línea después de imprimir una fila completa de números.
        fila++;  // Incrementa el valor de fila en 1 para pasar a la siguiente fila.
    }

    return 0;
}
