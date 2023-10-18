/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 17-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C 
Problema 4: -- Funciones o Procedimientos --

Crear un programa donde le indique al usuario ingresar dos 
n�meros al azar. cuando ejecute el programa debe mostrar como 
resultado final la suma, la resta, la multiplicaci�n y la divisi�n 
de esos dos n�meros ingresados anteriormente.

--------------------------------------------------------------------------------------------------*/
#include <stdio.h>

/* Funciones Aritm�ticas 
	Suma de los valores ingresados*/
double suma(double num1, double num2) {
    return num1 + num2;
}

// Resta de los valores ingresados
double resta(double num1, double num2) {
    return num1 - num2;
}

// Multiplicaci�n de los valores ingresados
double multiplicacion(double num1, double num2) {
    return num1 * num2;
}

// Divisi�n de los valores ingresados
double division(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        return -1; // Error si el divisor es 0
    }
}

int main() { //Funci�n principal
    double num1, num2;

    // Solicitud para ingresar dos n�meros
    printf("Ingrese el primer n�mero: ");
    scanf("%lf", &num1);

    printf("Ingrese el segundo n�mero: ");
    scanf("%lf", &num2);

    // Realizar las operaciones utilizando las funciones
    double resultadoSuma = suma(num1, num2);
    double resultadoResta = resta(num1, num2);
    double resultadoMultiplicacion = multiplicacion(num1, num2);
    double resultadoDivision = division(num1, num2);

    // Mostrar los resultados
    printf("Suma: %.0lf\n", resultadoSuma);
    printf("Resta: %.0lf\n", resultadoResta);
    printf("Multiplicaci�n: %.0lf\n", resultadoMultiplicacion);

    if (resultadoDivision != -1) {
        printf("Divisi�n: %.5lf\n", resultadoDivision);
    } else {
        printf("Divisi�n: Error, no se puede dividir por 0.\n");
    }

    return 0;
}
