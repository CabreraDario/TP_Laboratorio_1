#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Funcion.h"

/** \brief funcion realiza la suma entre dos numeros reales (a y b)
 *
 * \param El primer parametro es el primer numero ingresado (a)
 * \param El segundo parametro corresponde al segundo numero ingresado (b)
 * \return return retorna el resultado de la suma
 *
 */
double funcion_sumar (double a, double b)
{
    double suma;
        suma = a + b;
    return suma;
}


/** \brief Esta funcion realiza la resta entre dos numeros reales (a y b)
 *
 * \param El primer parametro corresponde al primer numero ingresado (a)
 * \param El segundo parametro es el segundo numero ingresado (b)
 * \return return retorna el el resultado de la resta
 *
 */
double funcion_restar (double a, double b)
{
    double resta;
        resta = a - b;

    return resta;
}

/** \brief Esta funcion realiza la multiplicaion entre dos numeros reales a y b
 *
 * \param EL primer parametro corresponde al primer numero ingresado (a)
 * \param El segundo parametro es el segundo numero ingresado
 * \return return retorna el resultado de la multiplicacion
 *
 */
 double funcion_multiplicar (double a, double b)
 {
     double producto;
         producto = a * b;

     return producto;
 }


 /** \brief Esta funcion realiza la division entre dos numeros reales a y b
  *
  * \param El primer parametro es el primer numero ingresado (a)
  * \param El segundo parametro es el segundo numero ingresado (b)
  * \return return devuelve el resultado de la division
  *
  */
 float funcion_dividir (double a, double b)
{
    double dividir;
          dividir = a / b;

    return dividir;
}


/** \brief Esta funcion calcula el factorial del primer numero ingresado por el usuario
 *
 * \param  recibe como unico parametro el primer numero ingresado (a)
 * \return retorna el factorial del numero ingresado
 * \return return 1 si el numero ingresado es 1
 */
double funcion_factorial (double a)
{

        if(a > 1)
            return a * funcion_factorial(a-1);
        else
            return 1;
}
/** \brief Esta funcion valida si lo que ingresa el usuario es un numero
 *
 * \param Recibe como unico parametro el digito o caracter a evaluar
 * \return retorna 0 si no se ingreso un numero de lo contrario retorna 1
 *
 */

int validar_numero(char numero[])
{
    int flag = 1;
    for(int i = 0; i < strlen(numero); i++)
    {
        if(!(isdigit(numero[i])))
        {
            printf("Ingrese solo numeros...\n");
            flag = 0;
        }
    }
    return flag;
}

