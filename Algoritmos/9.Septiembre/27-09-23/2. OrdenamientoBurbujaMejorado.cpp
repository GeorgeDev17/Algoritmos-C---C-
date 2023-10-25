/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 27-09-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C
     Ordenamientos: 
--- Ordenamiento burbuja Mejorado --- 
--------------------------------------------------------------------------------------------------*/
#include <stdio.h> 

int main(){
	bool sw = true;
	int li = 0;
	do {
		li++;
		sw = true;
		for (int i = 0; i < n - li; i++){
			if (v [i] > v [i + 1]){ // Compara los valores
			//Intercambia los datos
			int tem = v [i];
			v [i] = v [i + 1];
			v [i + 1] = tem;
			sw = false;
			}
		}
	} while (!sw);
	
	
	return 0;
}
