/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 30-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
8. Notas de estudiantes y promedio (-1 para finalizar).
--------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "Spanish");

    int numEstud, cont = 1;
    double totNotas = 0.0;

    printf("Ingresa el número de estudiantes o digita -1 para finalizar: ");
    scanf("%d", &numEstud);  // Solicita al usuario ingresar el número de estudiantes y lo almacena en numEstud

    while (numEstud != -1) {  // Se agrego un bucle que se ejecuta mientras el valor ingresado no sea -1
        while (cont <= numEstud) {  // Bucle interno para ingresar las notas de los estudiantes
            double nota;
            printf("Ingresa la nota del estudiante %d: ", cont);
            scanf("%lf", &nota);
            totNotas += nota;
            cont++;
        }

        double prom = totNotas / numEstud;

        printf("El promedio de las notas es: %.2lf\n", prom);
        
/* Nota: El programa normalmente finalizaria al imprimir el resultado del promedio
mediante la ejecución de la anterior linea, sin embargo, se ha agregado un reinicio
al código con la finalidad de continuar ejecutandose hasta que el usuario lo finalice*/

        totNotas = 0.0;  // Reinicia la suma de notas para el próximo cálculo
        cont = 1;  // Reinicia el contador para el próximo conjunto de estudiantes

        printf("Ingresa el número de estudiantes o digita -1 para finalizar): \n");
        scanf("%d", &numEstud);  // Solicita nuevamente el número de estudiantes para el próximo conjunto
    }

    printf("¡Has finalizado el programa! \n");

    return 0;
}
