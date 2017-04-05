#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[5];

    //INGRESO NUMEROS
    for(int i = 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numero[i]);
    }

    printf("Del primero al ultimo: ");
    //PRIMERO AL ULTIMO
    for(int i = 0; i < 5; i++){
        printf("%d ", numero[i]);
    }

    printf("\nDel ultimo al primero: ");
    //ULTIMO AL PRIMERO
    for(int i = 5; i > 0; i--){
        printf(" %d", numero[i]);
    }



    return 0;
}
