/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 17-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C 
Problema 4: -- Funciones o Procedimientos --

Crear un programa donde le indique al usuario ingresar dos 
números al azar. cuando ejecute el programa debe mostrar como 
resultado final la suma, la resta, la multiplicación y la división 
de esos dos números ingresados anteriormente.

--------------------------------------------------------------------------------------------------*/
#include <stdio.h>

/* Funciones Aritméticas 
	Suma de los valores ingresados*/
double suma(double num1, double num2) {
    return num1 + num2;
}

// Resta de los valores ingresados
double resta(double num1, double num2) {
    return num1 - num2;
}

// Multiplicación de los valores ingresados
double multiplicacion(double num1, double num2) {
    return num1 * num2;
}

// División de los valores ingresados
double division(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        return -1; // Error si el divisor es 0
    }
}

int main() { //Función principal
    double num1, num2;

    // Solicitud para ingresar dos números
    printf("Ingrese el primer número: ");
    scanf("%lf", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);

    // Realizar las operaciones utilizando las funciones
    double resultadoSuma = suma(num1, num2);
    double resultadoResta = resta(num1, num2);
    double resultadoMultiplicacion = multiplicacion(num1, num2);
    double resultadoDivision = division(num1, num2);

    // Mostrar los resultados
    printf("Suma: %.0lf\n", resultadoSuma);
    printf("Resta: %.0lf\n", resultadoResta);
    printf("Multiplicación: %.0lf\n", resultadoMultiplicacion);

    if (resultadoDivision != -1) {
        printf("División: %.5lf\n", resultadoDivision);
    } else {
        printf("División: Error, no se puede dividir por 0.\n");
    }

    return 0;
}
