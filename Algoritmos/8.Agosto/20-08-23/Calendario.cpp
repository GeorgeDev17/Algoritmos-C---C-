/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 20-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
3. El departamento de Recursos Humanos de la empresa café Combate quiere desarrollar un calendario
en línea para sus empleados, para calendarizar el número de días hábiles de trabajo de tal manera 
que el empleado introduzca un número de mes (1 a 12) y un año (1900-2014), y visualice el número de 
días de ese mes. Debe considerar que el mes  corresponde a febrero que puede tener 29 o 28 días
dependiendo de si es o no bisiesto, el año correspondiente.
Desarrolle un programa que cumpla con las especificaciones mencionadas y muestre en pantalla el mes,
el número de días y en el caso de que sea año bisiesto mostrar el mensaje de que es año bisiesto.
--------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int mes, anho, dia = 0; 
/*La variable dia se usará para almacenar el número de días en el mes correspondiente y su valor 
inicial es 0. Años biciestos entre (1900 y 2014)--1992, 1996, 2000, 2004, 2008, 2012*/
	
	printf ("Introduzca el número equivalente a un mes (1 a 12): "); scanf ("%d", &mes);
	
    if (mes < 1 || mes > 12) {
        printf("Mes inválido. Debe estar entre 1 y 12.\n\n");
    return 1; //Al retornar a 1 permite salir del programa en caso de que el mes ingresado sea invalido.
	}
	
	printf ("Introduzca un año entre 1900 y 2014: "); scanf ("%d", &anho);
	if (anho < 1900 || anho > 2014) {
        printf("Año inválido. Debe estar entre 1900 y 2014.\n\n");
    return 1; //Al retornar a 1 permite salir del programa en caso de que el año ingresado sea invalido.
    }
    
// Debemos verificar si el mes ingresado por el usuario es febrero if (mes == 2).
        if (mes == 2) {
/*Verificamos si el año ingresado es bisiesto, esto se conoce si es divisible por 4 
pero divisible por 100, o si es divisible por 400.
Utilizo el operador de módulo (%) para realizar la verificación del año bisiesto*/
        if ((anho % 4 == 0 && anho % 100 != 0) || anho % 400 == 0) { 
            dia = 29;  //Si febrero tiene 29 días se determina que el año es bisiesto
        printf("Es año bisiesto. \n");
        } else {
            dia = 28;  //De lo contrario el año no es bisiesto al tener 28 días
        }
/*Para tener en cuenta que para los meses abril(4), junio(6), septiembre(9) o noviembre(11). 
Son meses de 30 días.*/
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dia = 30;
/*Para los meses restantes enero (1), marzo(3), mayo(5), julio(7), agosto(8),octubre(10), diciembre(12).
Son meses de 31 días.*/
    } else {
        dia = 31;
    }
    printf("El mes %d tiene %d días.\n", mes, dia);
	return 0;
}
