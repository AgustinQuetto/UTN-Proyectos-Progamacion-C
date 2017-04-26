#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int opc;
int aux;
char continuar = 's';
int main()
{
    printf("----Sistema de registro de personas----\n");
    //limpio la basura de memoria que tanto me esta molestando
/*    for(int i = 0; i<5;i++){
                persona.dni[i] = {'\0'};
                persona.nombre[i] = {'\0'};
                persona.apellido[i] = {'\0'};
                persona.nacimiento.dia[i] = {'\0'};
                persona.nacimiento.mes[i] = {'\0'};
                persona.nacimiento.anio[i] = {'\0'};
    }*/

    do{
        printf("\n1- Ingresar persona\n2- Listar personas\n3- Modificar persona\n4- Eliminar persona\n5- Ordenar\n6- Salir\nOpcion: ");
        scanf("%d", &opc);

        personas unaPersona[COL];
        switch(opc){
            case 1:
                    agregarPersona(unaPersona[];COL);
                break;
            case 2:
                    listarPersona(unaPersona[];COL);
                break;
            case 3:
                printf("\nDNI del usuario a modificar: ");
                scanf("%d", &aux);

                break;
            case 4:
                printf("\nDNI del usuario a eliminar: ");
                scanf("%d", &aux);
                    inhabilitarPersona(personas unaPersona[], int arrayExtension, aux)
                break;
            case 5:
            //BURBUJERO QUICKSORT
                break;
            case 6:
                continuar = 'n';
                break;
                }
    }while(continuar == 's');

    return 0;
}
