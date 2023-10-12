/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 20-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
Dado un número entero de 4 cifras, elabore un programa que entregue como resultado este número invertido.
Ejemplo: 4532 como resultado debe salir 2354
--------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

int main(){
	int num, num1, num2, num3, num4, invert = 0;
	
	printf("Ingresa un número de 4 cifras: "); scanf ("%d", &num);
//Verificamos que el número ingresado realmente sea de 4 cifras 
	    if (num >= 1000 && num <= 9999) {
/*Mediante el operador módulo vamos a obtener las cifras 
individuales del número ingresado dividiendo el número original entre potencias 
de 10 y tomando sus residuos*/
	num1 = num / 1000; //Mediante la división de un número de 4 cifras entre 1000 se obtiene el primer digito.
//Mediante la división del número de 4 cifras entre 100, tomamos el residuo y se divide entre 10, de esta manera se obtiene el segundo digito.
	num2 = (num / 100) % 10;
	num3 = (num / 10) % 10;
	num4 = num % 10;
	
	invert = num4 * 1000 + num3 * 100 + num2 * 10 + num1;
	
	printf("\n\n Número invertido: %d ", invert);
    } else {
        printf("\n\n Opción no válida. El número no tiene 4 cifras.");
    }
    return 0;
}

