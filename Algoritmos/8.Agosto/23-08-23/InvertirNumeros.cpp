/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 20-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
Dado un n�mero entero de 4 cifras, elabore un programa que entregue como resultado este n�mero invertido.
Ejemplo: 4532 como resultado debe salir 2354
--------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

int main(){
	int num, num1, num2, num3, num4, invert = 0;
	
	printf("Ingresa un n�mero de 4 cifras: "); scanf ("%d", &num);
//Verificamos que el n�mero ingresado realmente sea de 4 cifras 
	    if (num >= 1000 && num <= 9999) {
/*Mediante el operador m�dulo vamos a obtener las cifras 
individuales del n�mero ingresado dividiendo el n�mero original entre potencias 
de 10 y tomando sus residuos*/
	num1 = num / 1000; //Mediante la divisi�n de un n�mero de 4 cifras entre 1000 se obtiene el primer digito.
//Mediante la divisi�n del n�mero de 4 cifras entre 100, tomamos el residuo y se divide entre 10, de esta manera se obtiene el segundo digito.
	num2 = (num / 100) % 10;
	num3 = (num / 10) % 10;
	num4 = num % 10;
	
	invert = num4 * 1000 + num3 * 100 + num2 * 10 + num1;
	
	printf("\n\n N�mero invertido: %d ", invert);
    } else {
        printf("\n\n Opci�n no v�lida. El n�mero no tiene 4 cifras.");
    }
    return 0;
}

