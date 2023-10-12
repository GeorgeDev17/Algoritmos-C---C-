/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 30-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C++ Sentencia Switch
1. Mostrar números del 1 al 100.
2. Mostrar números del 100 al 1.
3. Mostrar los números de n hasta m.
4. Mostrar los números impares de n hasta m.
5. Mostrar los números pares de n hasta m.
6. Mostrar la suma de los numeros pares de n hasta m.
7. Notas de N estudiantes y su promedio.
8. Notas de estudiantes y promedio (-1 para finalizar).
9. Mostrar multiplos de 3 hasta n.
10. Mostrar multiplos de m hasta n.
--------------------------------------------------------------------------------------------------*/
#include <cstdio>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Spanish");

    int option;
    printf("1. Mostrar números del 1 al 100. \n");
    printf("2. Mostrar números del 100 al 1. \n");
    printf("3. Mostrar los números de n hasta m. \n");
    printf("4. Mostrar los números impares de n hasta m. \n");
    printf("5. Mostrar los números pares de n hasta m. \n");
    printf("6. Mostrar la suma de los numeros pares de n hasta m. \n");
    printf("7. Notas de N estudiantes y su promedio. \n");
    printf("8. Notas de estudiantes y promedio (-1 para finalizar). \n");
    printf("9. Mostrar multiplos de 3 hasta n. \n");
    printf("10. Mostrar multiplos de m hasta n. \n");
    printf("\n Elija el programa que desea ejecutar: "); scanf("%d", &option);

    switch (option) {
//--------------------------------------------------------------------------------------------------
        case 1: {
    int incr = 1, num = 100;  // Declaración de variables con valores definidos rango inicio 1 y 100 final.
    
    while (incr <= num) {  // El bucle while se ejecutará mientras incr sea menor o igual a num
        printf("%d\n", incr);  // Imprimir el valor actual de incr en la consola seguido de un salto de línea
        incr = incr + 1;  // Se incrementa el valor de incr en 1 en cada iteración del bucle. 
            } 
        } 
        break; 
//--------------------------------------------------------------------------------------------------
        case 2: {
    int incr = 1, num = 100;  // Declaración de variables con valores definidos rango inicio 1 y 100 final.
    
    while (incr <= num) {  // El bucle while se ejecutará mientras incr sea menor o igual a num
        printf("%d\n", incr);  // Imprimir el valor actual de incr en la consola seguido de un salto de línea
        incr = ++incr;  // Se decrementa el valor de incr en 1 en cada iteración del bucle.
            } 
        } 
        break;
//--------------------------------------------------------------------------------------------------       
        case 3: {
    int incr, numN, numM;
// Solicitudes al usuario para ingresar valores por teclado
    printf("Ingresa un número para n: "); scanf("%d", &numN);  

    printf("Ingresa un número para m: "); scanf("%d", &numM); 

		while (numN <= numM) { // El bucle while se ejecutará mientras n sea menor o igual a m.
			printf ("%d ", numN);
			numN = numN + 1; // Se incrementa el valor de n en 1 para continuar al siguiente número. 
            }
        } 
        break;
//--------------------------------------------------------------------------------------------------
        case 4: {
    int n = 11, m = 15;
    while (n <= m) { // El bucle while se ejecutará mientras n sea menor o igual a m.
        if (n % 2 != 0) {  // Verifica si n es impar, si el residuo no es igual a cero.
            printf("%d ", n); 
        }
        n++; //Se incrementa el valor de n en 1 en cada iteración del bucle. 
            } 
        } 
        break;
//--------------------------------------------------------------------------------------------------
        case 5: {
	int n = 0, m = 6;

		while (n <= m) { // El bucle while se ejecutará mientras n sea menor o igual a m.
			if(n % 2 == 0){ // Verifica si n es par, si el residuo es igual a cero.
				printf ("%d ", n);
			}
			n++; //Se incrementa el valor de n en 1 en cada iteración del bucle.
            } 
        } 
        break;
//--------------------------------------------------------------------------------------------------
        case 6: {
    int n, m, sum = 0;  /* Declaración de variables. 
	la variable sum se inicializa a 0 para acumular la suma de los números pares.
	Se solicita al usuario ingresar el valor inicial para n y para m y se usa scanf para almacenar estos valores.*/
    printf("Ingresa el valor inicial para n: \n"); scanf("%d", &n);  
    
    printf("Ingresa el valor final para m: \n"); scanf("%d", &m); 
    
    while (n <= m) {  // El bucle while se ejecutará mientras n sea menor o igual a m.
        if (n % 2 == 0) {  // Verifica si el número actual de la variable n es par.
            printf("%d ", n); 
            sum = sum + n;  // Agrega el número par actual a la suma acumulada.
        }
        n = n + 1;  //Se incrementa el valor de n en 1 para continuar al siguiente número.
    }
    printf("\n La suma de los números pares es: %d\n", sum);
        } 
        break;
//--------------------------------------------------------------------------------------------------
        case 7: {
    int numEstud, contador = 1; // Se declaro un contador para realizar seguimiento al número de estudiantes.
    double totNotas = 0.0;  
  	

    printf("Ingresa el número de estudiantes: \n\n");
    scanf("%d", &numEstud);  // Solicita al usuario ingresar el número de estudiantes y lo almacena en numEstud.

    while (contador <= numEstud) {  // Bucle que se ejecuta mientras el contador sea menor o igual al número de estudiantes
        double nota;  // Se creo una variable para almacenar la nota del estudiante actual
        printf("Ingresa la nota del estudiante %d: ", contador);
        scanf("%lf", &nota);  
        totNotas += nota;  
        contador++;  // Se incrementa el contador para pasar al siguiente estudiante
    }

    double promedio = totNotas / numEstud;  // Calcula el promedio realizando una regla de tres.

    printf("El promedio de las notas es: %.2lf\n", promedio);  // Imprime el promedio de las notas con dos decimales %.2lf 
        } 
        break;
//--------------------------------------------------------------------------------------------------
        case 8: {
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
        } 
        break;
//--------------------------------------------------------------------------------------------------
        case 9: {
     int num, incr = 3;

    printf("Ingresa un número n: "); scanf("%d", &num);
    printf("Los múltiplos de 3 hasta %d son: ", num);
    while (incr <= num) {
/* Imprime los múltiplos de 3, se agrego un espacio en la secuencia de escape "%d ", 
esto lográ que se impriman los valores en una misma linea separados por un espacio.*/
        printf("%d ", incr);  
        incr += 3;  // Incrementa el valor de i en 3 para obtener el siguiente múltiplo
		}
    } 
        break;
//--------------------------------------------------------------------------------------------------
        case 10: {
    int incr, numM, numN;
// Solicitudes al usuario para ingresar valores por teclado
    printf("Ingresa un número para m: "); scanf("%d", &numM);  

    printf("Ingresa un número para n: "); scanf("%d", &numN); 

    printf("Los múltiplos de %d hasta %d son: ", numM, numN);
    
 	if (numM <= numN) {
	incr = numM;  // Inicializa la variable incr con el valor de numM
    while (incr <= numN) {  // El bucle se ejecuta mientras incr sea menor o igual a numN
        printf("%d ", incr);  // Se imprime el valor para multiplo de numM
        incr += numM;  // Se incrementa el valor de incr en numM para obtener el siguiente múltiplo
    	}
    } else {
        printf("No existen múltiplos entre %d y %d\n", numM, numN);
//--------------------------------------------------------------------------------------------------
			}
        } 
        break;

        default: {
            printf("El número ingresado no se encuentra en el rango de los algoritmos creados.\n");
        }
        break;
    }
    
    return 0;
}
