/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 23-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++
Programa que identifica si se ingresa o no una vocal. (a, e, i, o, u)
--------------------------------------------------------------------------------------------------*/
#include <iostream>

int main(){
	char vocal;
	printf("Ingrese una vocal: ");
	vocal = getchar();
	
	switch (vocal){
		case 'a': 
		printf ("A introducido la vocal a. \n");
		break;
		
		case 'e': 
		printf ("A introducido la vocal e. \n");
		break;
		
		case 'i': 
		printf ("A introducido la vocal i. \n");
		break;
		
		case 'o': 
		printf ("A introducido la vocal o. \n");
		break;
		
		case 'u': 
		printf ("A introducido la vocal u. \n");
		break;
		
		default: printf ("No es una vocal. \n\n Por favor, ingrese una opción válida.\n");
	}
	return 0; 
}
