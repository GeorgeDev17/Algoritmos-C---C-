/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versi�n: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualizaci�n: 28-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C
Crear un programa que muestre un men� de cajero autom�tico. 
			1. Validar clave  //Mostrar Men�
			2. Error          //Mostrar clave err�nea
    -------------------------------------------------
    1. Saldo                  //Muestra saldo
    2. Retirar                1- 50.000   2. 100.000  3- 320.000  //Mostrar nuevo saldo
    3. Pago de servicios      1.Agua 2.Cancelar  //Mostrar el nuevo saldo, que se pag� y su valor.
    4. Cambiar clave          1.Nueva clave "Digitar clave actual" y " repetirla para verificar"
                              entonces digitar nueva clave
                              1. Aceptar  2. Cancelar //Mostrar nueva clave
--------------------------------------------------------------------------------------------------*/
#include <cstdio>      // librer�a est�ndar de entrada/salida en C++.
#include <locale.h>    // la librer�a para establecer localizaci�n.

using namespace std;   // Espacio de nombres est�ndar.

int main() {
    setlocale(LC_CTYPE, "Spanish");  /* Esta funci�n se utiliza para establecer la configuraci�n regional o de localizaci�n.
	En este caso la configuraci�n de localizaci�n es en espa�ol.*/
    int key = 5555, keyEntered, option, money = 1000000;  // Declarando las de variables necesarias.

    printf("Digite su clave: ");  // Solicitud de ingreso de clave al usuario.
    scanf("%d", &keyEntered);     // Lectura de la clave ingresada para ser almacenada en keyEntered.

    if (key == keyEntered) {  // Comprueba si la clave ingresada es v�lida.
        printf("\t");
        printf("Bienvenido al cajero autom�tico: \n\n");  // Mensaje de bienvenida.
        printf("Ingrese la opci�n que desea validar: \n"); //Men�
        printf("1. Consultar saldo: \n");
        printf("2. Retirar dinero: \n");
        printf("3. Pago de servicios: \n");
        printf("4. Cambiar clave: \n\t"); // Salto de linea \n -- Salto de columna \t
        scanf("%d", &option);  // Lectura seg�n la opci�n elegida por el usuario.

        switch (option) {  // Inicio del bloque switch basado en la opci�n elegida.
            case 1:
                printf("\nSu saldo es: %d \n", money);  // Muestra el saldo actual.
                break;
                
            case 2: {
                int withdraw;
                printf("\n�Cu�nto dinero quiere retirar? \n");  // Pregunta al usuario cu�nto dinero desea retirar.
                printf("1. $50.000\n");
                printf("2. $100.000\n");
                printf("3. $320.000\n\t");
                scanf("%d", &withdraw);  // Lee la opci�n de retiro.

                int cantWithdraw = 0;
                switch (withdraw) {  // Calcula el monto a retirar seg�n la opci�n elegida.
                    case 1:
                        cantWithdraw = 50000;
                        break;
                    case 2:
                        cantWithdraw = 100000;
                        break;
                    case 3:
                        cantWithdraw = 320000;
                        break;
                    default:
                        printf("Cantidad inv�lida.\n");  // Mensaje de error para opci�n inv�lida.
                        return 1;
                }

                if (cantWithdraw > money) {
                    printf("Saldo insuficiente.\n");  // Mensaje si el saldo no es suficiente para el retiro.
                } else {
                    money -= cantWithdraw;  // Resta el monto retirado al saldo.
                    printf("Retiro exitoso. Saldo restante: %d\n", money);  // Muestra el saldo restante.
                }
                break;
            }
            
            case 3: {
                int service;
                printf("\n�Qu� servicio requieres pagar el d�a de hoy?: \n");
                printf("1. Agua\n");
                printf("2. Energ�a\n");
                printf("3. Internet\n\t");
                scanf("%d", &service);  // Lee la opci�n de servicio.

                int valueService = 0;
                switch (service) {
                    case 1:
                    case 2:
                    case 3:
                        printf("\nIngrese el valor del recibo a pagar: \n");
                        scanf("%d", &valueService);  // Lee el valor del recibo para el servicio elegido.
                        break;
                    default:
                        printf("Opci�n inv�lida.\n");  // Mensaje de error para opci�n inv�lida.
                        return 1; //Finaliza la funci�n debido a que se ha presentado un error.
                }

                if (valueService > money) {
                    printf("Saldo insuficiente.\n");  // Mensaje si el saldo no es suficiente para el pago.
                } else {
                    money -= valueService;  // Resta el valor del servicio al saldo.
                    printf("Pago del servicio exitoso. Saldo restante: %d\n", money);  // Muestra el saldo restante.
                }
                break;
            }
            
            case 4: {
                int keyAct, newKey;
                printf("\nDigite su clave actual: ");
                scanf("%d", &keyAct);  // Lee la clave actual para cambiarla.

                if (keyAct == key) {  // Comprueba si la clave actual coincide con la clave almacenada.
                    printf("Digite su nueva clave: ");
                    scanf("%d", &newKey);  // Lee la nueva clave.

                    if (newKey >= 1000 && newKey <= 9999) {
                        key = newKey;  // Actualiza la clave almacenada con la nueva clave.
                        printf("Su clave fue actualizada correctamente. \n");  // Mensaje de confirmaci�n.
                    } else {
                        printf("La clave ingresada no es v�lida. Ingrese una clave v�lida de cuatro d�gitos.\n");
                    }
                } else {
                    printf("ERROR: Clave ingresada inv�lida. \n");  // Mensaje si la clave actual es incorrecta.
                }
                break;
            }
            default:
                printf("ERROR: Opci�n no disponible. \n");  // Mensaje si se elige una opci�n inv�lida.
        }
    } else {
        printf("ERROR: Clave ingresada inv�lida, int�ntelo m�s tarde. \n");  // Mensaje si la clave ingresada es incorrecta.
    }

    return 0;  // Finaliza el programa.
}
