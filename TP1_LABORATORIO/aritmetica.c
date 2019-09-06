#include "aritmetica.h"

int suma(int a, int b) //funcion suma;
{
    int r;
    r = a+b;
    return r;
}
int resta(int a, int b) //funcion resta;
{
    int r;
    r = a-b;
    return r;
}
int multiplicacion(int a, int b) //funcion multiplicacion;
{
    int r;
    r = a*b;
    return r;
}
float division(int a, int b) //funcion division;
{
    float r;
    r = (float)a/b;
    return r;
}
int factorial (int a) //funcion factorial//
{
    int r;
    if (a==0)
    {
        r = 1;
    }
    else
    {
        r = a*factorial(a-1);
    }
    return r;
}
