/*
CUERPO
*/

//a)
float suma(float operando1, float operando2)
{
    float resultadoSuma;
    resultadoSuma = operando1 + operando2;
    return resultadoSuma;
}

float resta(float operando1, float operando2)
{
    float resultadoResta;
    resultadoResta = operando1 - operando2;
    return resultadoResta;
}

float division(float operando1, float operando2)
{
    float resultadoDivision;
    resultadoDivision = operando1 / operando2;
    return resultadoDivision;
}

float multiplicacion(float operando1, float operando2)
{
    float resultadoMultiplicacion;
    resultadoMultiplicacion = operando1 * operando2;
    return resultadoMultiplicacion;
}

float factorial(float operador)
{
    float contador;
    float fact = 1; /*Resultado FACTOREO*/

    for( contador = operador; contador > 0 ; contador-- )
        {
            fact = fact * contador;
        }
    return fact;
}
