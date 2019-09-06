#include <aritmetica.h>

int suma(int a, int b)
{
    int r;
    r = a+b
    return r;
}
int resta(int a, int b)
{
    int r;
    r = a-b
    return r;
}
int multiplicacion(int a, int b)
{
    int r;
    r = a*b
    return r;
}
int division(int a, int b)
{
    int r;
    r = a/b
    return r;
}
int factorial (int a, int b)
{
    int r;
    if (a==0)
    {
        r = 1;
    }
    else
    {
        r = a*factorial(a-1)
    }
    return r;
}
