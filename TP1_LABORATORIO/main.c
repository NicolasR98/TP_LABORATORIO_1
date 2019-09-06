#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.h"

int main()
{
    int a;
    int b;
    float r;
    char operacion;


do
{
//Menu de calculadora;

    printf("CALCULADORA \n");
    printf("\n");
    printf("Ingrese el primer numero \n");
    scanf("%d",&a);
    printf("Ingrese el segundo numero \n");
    scanf("%d",&b);
    printf("\n");
    printf("Ingrese una opcion \n");
    printf("1) SUMA\n");
    printf("2) RESTA\n");
    printf("3) MULTIPLICACION\n");
    printf("4) DIVISION\n");
    printf("5) FACTORIAL \n");
    printf("6) SALIR\n");
    printf("\n");
    fflush(stdin);
    scanf("%c",&operacion);


    switch(operacion)
    {
    case'1':r = suma(a,b);
    printf("El resultado de la suma de %d mas %d es: %.2f \n",a,b,r); //SUMA
    break;

    case'2':r = resta(a,b);
    printf("El resultado de la resta de %d menos %d es: %.2f \n",a,b,r); //RESTA
    break;

    case'3':r = multiplicacion(a,b);
    printf("El resultado de la multiplicacion de %d por %d es: %.2f \n",a,b,r); //MULTIPLICACION
    break;

    case'4':r = division(a,b);
    if (b!=0)
    {
    printf("El resultado de la division de %d con %d es: %.2f \n",a,b,r); //DIVISION
    }
    else
    {
     printf("No se puede dividir por cero\n");
    }
    break;

    case'5':
    if(a<0)
    {
        printf("No se puede sacar el factorial de un numero negativo\n"); //FACTORIAL
    }
    else
    {
    r = factorial(a);
    printf("El factorial %d es: %.2f \n",a,r);
    }

    if(b<0)
    {
    printf("No se puede sacar el factorial de un numero negativo\n");
    }

    else
    {
    r = factorial(b);
    printf("El factorial %d es: %.2f \n",b,r);
    }
    break;

    case'6':
    printf("Hasta luego!!!\n"); //SALIDA
    break;
    default:
    printf("Ha ingresado una opcion incorrecta\n");

    }

    system("pause");
    system("cls");
}
while(operacion!='6');
return 0;
}
