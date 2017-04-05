#include <stdio.h>
#include <stdlib.h>

void sumar(int num1, int num2);
int main()
{
    int num1;
    int num2;

    printf("Ingrese un numero:");
    scanf("%d",&num1);

    printf("Ingrese otro numero:&nbsp;");
    scanf("%d",&num2);

    sumar(num1,num2);
    return 0;
}


void sumar(int num1, int num2){
    int resultado;
    resultado = num1+num2;
    printf("La suma de ambos es: %d",&resultado);
}
