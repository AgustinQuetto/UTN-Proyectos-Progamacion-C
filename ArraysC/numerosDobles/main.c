#include <stdio.h>
#include <stdlib.h>

#define TAM 5
#define CANT 2

/** \brief valida que un entero pertenezca a un rango de valores
 *
 * \param num numero a validar
 * \param inf limite inferior del rango
 * \param sup limite superior del rango
 * \return 0 si no pertenece al rango 1 si pertenece al rango.
 *
 */
int validarRangoEntero(int, int, int);

int main()
{
   int numeros[TAM] = {};
   int numeros2[TAM] = {};
   int valor;
   int indice;
   int auxInt;

     for(int i=0; i<TAM; i++){

       numeros[i] = 0;
    }

     for(int i=0; i<CANT; i++){

        printf("Ingrese valor: ");
        scanf("%d", &valor);
         printf("Ingrese indice: ");
        scanf("%d", &auxInt);

        while(validarRangoEntero(auxInt, 0, TAM-1)==0){
            printf("Error, el indice debe estar comprendido entre 0 y %d . Reingrese", TAM-1);
            scanf("%d", &auxInt);        }

        indice = auxInt;

        numeros[indice] = numeros[indice] + valor;
        numeros2[indice] = numeros2[indice] + valor*2;

    }


    for(int i=0; i<TAM; i++){

        printf("%d ", numeros[i]);
    }

    printf("\n");

    for(int i=0; i<TAM; i++){

        printf("%d ", numeros2[i]);
    }


    return 0;
}

int validarRangoEntero(int num, int inf, int sup){

    int esValido = 0;
    int aux;
    if(inf > sup){
        aux = inf;
        inf = sup;
        sup = aux;
    }

    if( num >= inf && num <= sup){
        esValido = 1;
    }

    return esValido;
}
