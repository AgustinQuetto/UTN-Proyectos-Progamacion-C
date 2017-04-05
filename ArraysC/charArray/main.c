#include <stdio.h>
#include <stdlib.h>

int main()
{

    char palabras[10] = {};

    //INGRESO NUMEROS
    for(int i = 0; i < 10; i++){
        char palabraIngresada;
        fflush(stdin);
        printf("Ingrese una palabra: ");
        palabras[i] = getchar();
    }

    printf("Palabra ingresada:");
    for(int i = 0; i < 10; i++){
        printf("%c \n", palabras[i]);
    }
    return 0;
}
