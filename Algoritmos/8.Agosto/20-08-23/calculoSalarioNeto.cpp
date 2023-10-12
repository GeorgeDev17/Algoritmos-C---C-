/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux
Ultima actualización: 20-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
4. El jefe del departamento de construcción de la constructora CONSTRUCTOR S.A, 
desea que se le desarrolle un programa en C++ para sus empleados.
El programa deberia poder calcular el sueldo de un empleado, ademas, si el número de horas
trabajadas es mayor a 40 hrs, el excedente de 40 hrs se paga el doble del valor de la hora, en 
caso de no ser mayor a 40 hrs, se paga el valor normal por hora, si las horas exceden a 
50 hrs, el excedente de 50 hrs se paga el triple del valor de la hora.
Se les descontara un impuesto del 12% sobre su sueldo. Se pedira el nombre del empleado,
el número de horas trabajadas y el valor de la hora. Mostrar en pantalla el nombre del empleado,
el número de horas trabajadas y su sueldo.
--------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <locale.h>
#include <cstdio>
using namespace std;

int main(){
	setlocale (LC_CTYPE, "Spanish");
	const double impuesto = 0.12;
	char empleado[50];  // Usamos un arreglo de caracteres para almacenar el nombre 
	int salarioBruto, salarioNeto, hora, valor;
		
		printf ("Ingrese el nombre completo del empleado: ");
		scanf(" %[^\n]", empleado); // Se uso %[^\n] en la función scanf para leer una línea completa 
		printf ("Digite las horas laboradas: "); scanf ("%d", &hora);
		printf ("Digite el valor de la hora laboral: $"); scanf ("%d", &valor);
		
    if (hora >= 50) {
        salarioBruto = valor * hora * 3;
    } else if (hora >= 40) {
        salarioBruto = valor * hora * 2;
    } else {
        salarioBruto = valor * hora;
    }
	
    salarioNeto = salarioBruto - (salarioBruto * impuesto);
		printf("\t\n El salario neto del empleado %s con un total de %d horas laboradas es de: $%d\n", empleado, hora, salarioNeto);
	return 0;
}
