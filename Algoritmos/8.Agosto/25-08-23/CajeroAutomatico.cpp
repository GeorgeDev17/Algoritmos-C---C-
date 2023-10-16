/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 28-08-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos C
Crear un programa que muestre un menú de cajero automático. 
			1. Validar clave  //Mostrar Menú
			2. Error          //Mostrar clave errónea
    -------------------------------------------------
    1. Saldo                  //Muestra saldo
    2. Retirar                1- 50.000   2. 100.000  3- 320.000  //Mostrar nuevo saldo
    3. Pago de servicios      1.Agua 2.Cancelar  //Mostrar el nuevo saldo, que se pagó y su valor.
    4. Cambiar clave          1.Nueva clave "Digitar clave actual" y " repetirla para verificar"
                              entonces digitar nueva clave
                              1. Aceptar  2. Cancelar //Mostrar nueva clave
--------------------------------------------------------------------------------------------------*/
#include <cstdio>      // librería estándar de entrada/salida en C++.
#include <locale.h>    // la librería para establecer localización.

using namespace std;   // Espacio de nombres estándar.

int main() {
    setlocale(LC_CTYPE, "Spanish");  /* Esta función se utiliza para establecer la configuración regional o de localización.
	En este caso la configuración de localización es en español.*/
    int key = 5555, keyEntered, option, money = 1000000;  // Declarando las de variables necesarias.

    printf("Digite su clave: ");  // Solicitud de ingreso de clave al usuario.
    scanf("%d", &keyEntered);     // Lectura de la clave ingresada para ser almacenada en keyEntered.

    if (key == keyEntered) {  // Comprueba si la clave ingresada es válida.
        printf("\t");
        printf("Bienvenido al cajero automático: \n\n");  // Mensaje de bienvenida.
        printf("Ingrese la opción que desea validar: \n"); //Menú
        printf("1. Consultar saldo: \n");
        printf("2. Retirar dinero: \n");
        printf("3. Pago de servicios: \n");
        printf("4. Cambiar clave: \n\t"); // Salto de linea \n -- Salto de columna \t
        scanf("%d", &option);  // Lectura según la opción elegida por el usuario.

        switch (option) {  // Inicio del bloque switch basado en la opción elegida.
            case 1:
                printf("\nSu saldo es: %d \n", money);  // Muestra el saldo actual.
                break;
                
            case 2: {
                int withdraw;
                printf("\n¿Cuánto dinero quiere retirar? \n");  // Pregunta al usuario cuánto dinero desea retirar.
                printf("1. $50.000\n");
                printf("2. $100.000\n");
                printf("3. $320.000\n\t");
                scanf("%d", &withdraw);  // Lee la opción de retiro.

                int cantWithdraw = 0;
                switch (withdraw) {  // Calcula el monto a retirar según la opción elegida.
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
                        printf("Cantidad inválida.\n");  // Mensaje de error para opción inválida.
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
                printf("\n¿Qué servicio requieres pagar el día de hoy?: \n");
                printf("1. Agua\n");
                printf("2. Energía\n");
                printf("3. Internet\n\t");
                scanf("%d", &service);  // Lee la opción de servicio.

                int valueService = 0;
                switch (service) {
                    case 1:
                    case 2:
                    case 3:
                        printf("\nIngrese el valor del recibo a pagar: \n");
                        scanf("%d", &valueService);  // Lee el valor del recibo para el servicio elegido.
                        break;
                    default:
                        printf("Opción inválida.\n");  // Mensaje de error para opción inválida.
                        return 1; //Finaliza la función debido a que se ha presentado un error.
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
                        printf("Su clave fue actualizada correctamente. \n");  // Mensaje de confirmación.
                    } else {
                        printf("La clave ingresada no es válida. Ingrese una clave válida de cuatro dígitos.\n");
                    }
                } else {
                    printf("ERROR: Clave ingresada inválida. \n");  // Mensaje si la clave actual es incorrecta.
                }
                break;
            }
            default:
                printf("ERROR: Opción no disponible. \n");  // Mensaje si se elige una opción inválida.
        }
    } else {
        printf("ERROR: Clave ingresada inválida, inténtelo más tarde. \n");  // Mensaje si la clave ingresada es incorrecta.
    }

    return 0;  // Finaliza el programa.
}
