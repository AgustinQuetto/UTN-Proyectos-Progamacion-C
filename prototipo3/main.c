#include <stdio.h>
#include <stdlib.h>

int sumar(int num1, int num2);

int main()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese un numero:");
    scanf("%d",&num1);

    printf("Ingrese otro numero:");
    scanf("%d",&num2);

    resultado = sumar(num1,num2);
    printf("El resultado es %d:",&resultado);
    return 0;
}

int sumar(int num1, int num2){
    return num1+num2;
}
