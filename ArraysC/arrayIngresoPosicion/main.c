#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero[10] = {0,0,0,0,0,0,0,0,0,0,0};

    //INGRESO NUMEROS
    for(int i = 0; i < 10; i++){
        int posicion;
        int numeroIngresado;
        printf("Ingrese un numero: ");
        scanf("%d", &numeroIngresado);
        printf("Ingrese la posicion: ");
        scanf("%d", &posicion);
        numero[posicion] = numero[posicion]+numeroIngresado;
    }

    printf("Vector ingresado:");
    for(int i = 0; i < 10; i++){
        printf("%d \n", numero[i]);
    }
    return 0;
}
