/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 30-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
7. Notas de N estudiantes y su promedio.
--------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "Spanish");

    int numEstud, contador = 1; // Se declaro un contador para realizar seguimiento al n�mero de estudiantes.
    double totNotas = 0.0;  
  	

    printf("Ingresa el n�mero de estudiantes: \n\n");
    scanf("%d", &numEstud);  // Solicita al usuario ingresar el n�mero de estudiantes y lo almacena en numEstud.

    while (contador <= numEstud) {  // Bucle que se ejecuta mientras el contador sea menor o igual al n�mero de estudiantes
        double nota;  // Se creo una variable para almacenar la nota del estudiante actual
        printf("Ingresa la nota del estudiante %d: ", contador);
        scanf("%lf", &nota);  
        totNotas += nota;  
        contador++;  // Se incrementa el contador para pasar al siguiente estudiante
    }

    double promedio = totNotas / numEstud;  // Calcula el promedio realizando una regla de tres.

    printf("El promedio de las notas es: %.2lf\n", promedio);  // Imprime el promedio de las notas con dos decimales %.2lf

    return 0; 
}
