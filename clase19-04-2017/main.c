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
        printf("\n1- Ingresar persona\n");
        printf("2- Listar personas\n");
        printf("3- Modificar persona\n");
        printf("4- Eliminar persona\n");
        printf("5- Ordenar\n");
        printf("6- Salir\n");
        printf("Opcion: ");
        fflush(stdin);
        scanf("%d",&opc);

        personas unaPersona[5];
        switch(opc){
            case 1:
                printf("\nIngrese el DNI: ");
                scanf("%d", &unaPersona[0].dni);
                printf("\nIngrese el nombre: ");
                fflush(stdin);
                scanf("%s", &unaPersona[0].nombre);
                printf("\nIngrese el apellido: ");
                fflush(stdin);
                scanf("%s", &unaPersona[0].apellido);
                printf("\nIngrese el dia: ");
                scanf("%d", &unaPersona[0].nacimiento.dia);
                printf("\nIngrese el mes: ");
                scanf("%d", &unaPersona[0].nacimiento.mes);
                printf("\nIngrese el anio: ");
                scanf("%d", &unaPersona[0].nacimiento.anio);
                printf("\nDesea activar la persona ingresada? 1/0 ");
                scanf("%d", &unaPersona[0].estado);
                break;
            case 2:
                for(int i = 0; i<5;i++){
                        /*if (unaPersona[i].dni== 1){*/
                            printf("\n%d | %s, %s | %d/%d/%d", unaPersona[0].dni,unaPersona[0].apellido,unaPersona[0].nombre,unaPersona[0].nacimiento.dia,unaPersona[0].nacimiento.mes,unaPersona[0].nacimiento.anio);
                        /*}*/
                }
                break;
            case 3:
                printf("\nDNI del usuario a eliminar: ");
                fflush(stdin);
                scanf("%d", &aux);
                    for(int i=0; i < 5;i++){
                        if(unaPersona[i].dni == aux){
                            unaPersona[i].dni == 0;
                        }
                    }
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                continuar = 'n';
                break;
                }
    }while(continuar = 's');
//            persona.id=1;
  //          strcpy(persona.name, "Agustin");
    //        persona.percentage = 86.5;
    return 0;
}
