/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 20-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
3. El departamento de Recursos Humanos de la empresa caf� Combate quiere desarrollar un calendario
en l�nea para sus empleados, para calendarizar el n�mero de d�as h�biles de trabajo de tal manera 
que el empleado introduzca un n�mero de mes (1 a 12) y un a�o (1900-2014), y visualice el n�mero de 
d�as de ese mes. Debe considerar que el mes  corresponde a febrero que puede tener 29 o 28 d�as
dependiendo de si es o no bisiesto, el a�o correspondiente.
Desarrolle un programa que cumpla con las especificaciones mencionadas y muestre en pantalla el mes,
el n�mero de d�as y en el caso de que sea a�o bisiesto mostrar el mensaje de que es a�o bisiesto.
--------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int mes, anho, dia = 0; 
/*La variable dia se usar� para almacenar el n�mero de d�as en el mes correspondiente y su valor 
inicial es 0. A�os biciestos entre (1900 y 2014)--1992, 1996, 2000, 2004, 2008, 2012*/
	
	printf ("Introduzca el n�mero equivalente a un mes (1 a 12): "); scanf ("%d", &mes);
	
    if (mes < 1 || mes > 12) {
        printf("Mes inv�lido. Debe estar entre 1 y 12.\n\n");
    return 1; //Al retornar a 1 permite salir del programa en caso de que el mes ingresado sea invalido.
	}
	
	printf ("Introduzca un a�o entre 1900 y 2014: "); scanf ("%d", &anho);
	if (anho < 1900 || anho > 2014) {
        printf("A�o inv�lido. Debe estar entre 1900 y 2014.\n\n");
    return 1; //Al retornar a 1 permite salir del programa en caso de que el a�o ingresado sea invalido.
    }
    
// Debemos verificar si el mes ingresado por el usuario es febrero if (mes == 2).
        if (mes == 2) {
/*Verificamos si el a�o ingresado es bisiesto, esto se conoce si es divisible por 4 
pero divisible por 100, o si es divisible por 400.
Utilizo el operador de m�dulo (%) para realizar la verificaci�n del a�o bisiesto*/
        if ((anho % 4 == 0 && anho % 100 != 0) || anho % 400 == 0) { 
            dia = 29;  //Si febrero tiene 29 d�as se determina que el a�o es bisiesto
        printf("Es a�o bisiesto. \n");
        } else {
            dia = 28;  //De lo contrario el a�o no es bisiesto al tener 28 d�as
        }
/*Para tener en cuenta que para los meses abril(4), junio(6), septiembre(9) o noviembre(11). 
Son meses de 30 d�as.*/
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dia = 30;
/*Para los meses restantes enero (1), marzo(3), mayo(5), julio(7), agosto(8),octubre(10), diciembre(12).
Son meses de 31 d�as.*/
    } else {
        dia = 31;
    }
    printf("El mes %d tiene %d d�as.\n", mes, dia);
	return 0;
}
