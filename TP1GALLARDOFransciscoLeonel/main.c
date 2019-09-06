/*******************************************************************
* Programa: Calculadora
* *
Objetivo: Desarrolar una calculadora con funciones de suma, resta,
          division, multiplicacion y factoreo
* *
Version: 0.1 del 05 septiembre de 2019
* Autor: Francisco Leonel GALLARDO
* *
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h" /*Mi bibloteca*/


int main()
{/*Inicio main*/
    /*DECLARACION DE VARIABLES*/
    float operador1 = 0; /* operador1 es el primer numero que introducimos */
    float operador2 = 0; /* operador2 es el segundo numero que introducimos */
    /* Resultado de las operaciones */
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float resultadoFactorialA;
    float resultadoFactorialB;

    int opcion; /* Opcion que elejimos */

    do
    {
        /*MENU*/
        printf("\n ------------------------------------------------------------");
        printf("\n       CALCULADORA v1        ");
        printf("\n  Los operandos son A = %.2f y B = %.2f ",operador1 ,operador2 );
        printf("\n  1. Ingresar 1er operando A ");
        printf("\n  2. Ingresar 2do operando B ");
        printf("\n  3. Calcular todas las operaciones ");
        printf("\n            a) Calcular la suma (A+B) ");
        printf("\n            b) Calcular la resta (A-B) ");
        printf("\n            c) Calcular la division (A/B) ");
        printf("\n            d) Calcular la multiplicacion (A*B) ");
        printf("\n            e) Calcular el factorial (A!) ");
        printf("\n  4. Informar resultados ");
        printf("\n  5. Salir");
        printf("\n ------------------------------------------------------------");
        printf("\n ");

        /*ENTRADA*/
        scanf("%d", &opcion); /*Elijes una opcion 1-5*/

        system("cls"); /*Limpia pantalla*/

        switch(opcion) /*Dependiendo de la opcion elejida tendremos las acciones a realizar en los distintos casos*/
        {/*Inicio de switch*/
        case 1:
            printf("\n Escribe el primer operador \n");
            scanf("%f", &operador1); /*pido primer numero*/
            system("cls"); /*Limpia pantalla*/
            break;

        case 2:
            printf(" Escribe el Segundo operador \n");
            scanf("%f", &operador2); /*pido segundo numero*/
            system("cls"); /*Limpia pantalla*/
            break;

        case 3:
            resultadoSuma = suma(operador1, operador2); /*LLamada a la funcion SUMA*/

            resultadoResta = resta(operador1, operador2); /*Llamada a la funcion RESTA*/

            resultadoDivision = division(operador1, operador2); /*Llamada a la funcion DIVISION*/

            resultadoMultiplicacion = multiplicacion(operador1, operador2); /*Llamada a la funcion Multiplicacion*/

            resultadoFactorialA = factorial(operador1); /*Llamada a la funcion FACTORIAL A*/

            resultadoFactorialB = factorial(operador2); /*Llamada a la funcion FACTORIAL B*/

            printf(" OPERACIONES CALCULADAS ");

            break;

        case 4:
            printf("\n A) El resultado de A+B es: %.2f", resultadoSuma);

            printf("\n B) El resultado de A-B es: %.2f", resultadoResta);

            if(operador2 == 0)
               {
                printf("\n C) NO SE PUEDE REALIZAR ESA DIVISION PORQUE EL DIVISOR ES CERO!");
               }
               else
               {
                printf("\n C) El resultado de la division es: %.2f", resultadoDivision);
               }

            printf("\n D) El resultado de A*B es: %.2f", resultadoMultiplicacion);

            printf("\n E) El FACTORIAL de A es: %.2f", resultadoFactorialA);
            printf("\n    y el FACTORIAL de B es: %.2f", resultadoFactorialB);

            break;

        case 5:
            printf(" Presiona alguna tecla para salir \n ");
            break;

        default:
            printf(" INVALIDO \n ");
            break;

        } /*Cierre de switch*/

    }while(opcion != 5);

    return 0;

} /*CIERRE main*/
