#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Funcion.h"

int main()
{
    char numero_1[20];
    char numero_2[20];
    double suma, resta, division, factorial, producto;
    int opcion;
    int aux;
    float primer_numero_valido;
    float segundo_numero_valido;
    char salir = 's';

        do{
            printf("****Calculadora Basica****\n\n");
            printf("Ingrese la opcion de la operacion que desea realizar, del 1 al 7:\n\n");
            printf("1 - Calcular suma (A+B)\n");
            printf("2 - Calcular resta (A-B)\n");
            printf("3 - Calcular multiplicacion (A*B)\n");
            printf("4 - Calcular division (A/B)\n");
            printf("5 - Calcular el factorial (A!)\n");
            printf("6 - Calcular todas las operaiones\n");
            printf("7 - Salir\n\n");
            scanf("%d", & opcion);
            fflush(stdin);

                if(opcion < 1 && opcion > 7)
                {
                    printf("Error, ingrese una opcion valida... Reingrese:\n");
                    scanf("%d", & opcion);
                    break;
                }
             system("clear");

            switch(opcion)
            {
                case 1:
                        do{
                            printf("Ingrese primer numero: ");
                            scanf("%s", numero_1);
                            fflush(stdin);
                            aux = validar_numero(numero_1);

                        }while(aux == 0);
                        primer_numero_valido = (float) atoi(numero_1);

                        do{
                            printf("Ingrese segundo numero: ");
                            scanf("%s", numero_2);
                            fflush(stdin);
                            aux = validar_numero(numero_2);
                        }while(aux == 0);
                        segundo_numero_valido = (float) atoi(numero_2);

                       suma = funcion_sumar(primer_numero_valido, segundo_numero_valido);
                       printf("EL resultado de la suma es: %.2f\n\n", suma);
                       //system("clear");
                    break;

                case 2:
                        do{
                            printf("Ingrese primer numero: ");
                            scanf("%s", numero_1);
                            fflush(stdin);
                            aux = validar_numero(numero_1);

                        }while(aux == 0);
                        primer_numero_valido = (float) atoi(numero_1);

                        do{
                            printf("Ingrese segundo numero: ");
                            scanf("%s", numero_2);
                            fflush(stdin);
                            aux = validar_numero(numero_2);
                        }while(aux == 0);
                        segundo_numero_valido = (float) atoi(numero_2);

                       resta = funcion_restar(primer_numero_valido, segundo_numero_valido);
                       printf("EL resultado de la resta es: %.2f\n\n", resta);

                    break;

                case 3:
                        do{
                            printf("Ingrese primer numero: ");
                            scanf("%s", numero_1);
                            fflush(stdin);
                            aux = validar_numero(numero_1);

                        }while(aux == 0);
                        primer_numero_valido = (float) atoi(numero_1);

                        do{
                            printf("Ingrese segundo numero: ");
                            scanf("%s", numero_2);
                            fflush(stdin);
                            aux = validar_numero(numero_2);
                        }while(aux == 0);
                        segundo_numero_valido = (float) atoi(numero_2);

                       producto = funcion_multiplicar(primer_numero_valido, segundo_numero_valido);
                       printf("EL resultado de la multiplicacion es: %.2f\n\n", producto);
                    break;

                case 4:
                        do{
                            printf("Ingrese primer numero: ");
                            scanf("%s", numero_1);
                            fflush(stdin);
                            aux = validar_numero(numero_1);

                        }while(aux == 0);
                        primer_numero_valido = (float) atoi(numero_1);

                        do{
                            printf("Ingrese segundo numero: ");
                            scanf("%s", numero_2);
                            fflush(stdin);
                            aux = validar_numero(numero_2);
                        }while(aux == 0);
                        segundo_numero_valido = (float) atoi(numero_2);
                        if(segundo_numero_valido == 0)
                            {
                                printf("Error. El denominador no debe ser 0 ...\nIntente nuevamente!\n\n");
                                break;
                            }
                       division = funcion_dividir(primer_numero_valido, segundo_numero_valido);
                       printf("EL resultado de la division es: %.2f\n\n", division);
                    break;

                case 5:
                        do{
                            printf("Ingrese numero: ");
                            scanf("%s", numero_1);
                            fflush(stdin);
                            aux = validar_numero(numero_1);

                        }while(aux == 0);
                        primer_numero_valido = (float) atoi(numero_1);
                       factorial = funcion_factorial(primer_numero_valido);
                       printf("EL resultado del factorial es: %.2f\n\n", factorial);
                    break;

                case 6:
                        do{
                            printf("Ingrese primer numero: ");
                            scanf("%s", numero_1);
                            fflush(stdin);
                            aux = validar_numero(numero_1);

                        }while(aux == 0);
                        primer_numero_valido = (float) atoi(numero_1);

                        do{
                            printf("Ingrese segundo numero: ");
                            scanf("%s", numero_2);
                            fflush(stdin);
                            aux = validar_numero(numero_2);
                        }while(aux == 0);
                        segundo_numero_valido = (float) atoi(numero_2);

                       suma = funcion_sumar(primer_numero_valido, segundo_numero_valido);
                       printf("EL resultado de la suma es: %.2f\n\n", suma);
                       resta = funcion_restar(primer_numero_valido, segundo_numero_valido);
                       printf("EL resultado de la resta es: %.2f\n\n", resta);
                       producto = funcion_multiplicar(primer_numero_valido, segundo_numero_valido);
                       printf("EL resultado de la multilicacion es: %.2f\n\n", producto);
                       division = funcion_dividir(primer_numero_valido, segundo_numero_valido);
                       printf("EL resultado de la division es: %.2f\n\n", division);
                       factorial = funcion_factorial(primer_numero_valido);
                       printf("EL resultado del factorial es: %.2f\n\n", factorial);

                    break;

                case 7:
                        printf("Para salir presiones 's': ");
                        scanf(" %c", & salir);
                        if(salir == 's')
                        {
                            printf("Hasta luego...\n\n");
                        }
                        salir = 'n';
                    break;
            }


        }while(salir == 's');
    return 0;
}
