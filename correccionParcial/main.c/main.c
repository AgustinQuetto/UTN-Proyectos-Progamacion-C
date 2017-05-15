#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define FILA 4
#define COLUMNA 13

float matriz[FILA][COLUMNA];
//guarda datos en grupos de 3 (linea, numero de colectivo, recaudacion)

int nroLinea;
int nroLineaAux;
int nroColectivoAux;
int nroColectivo;
char continuar = 'n';
float nroRecaudacionAux;
float recaudacion;

int main()
{
    //INICIALIZAR EN CERO TODA LA MATRIZ
    for(int i=0; i < FILA; i++){
        for(int j= 0; j<COLUMNA;j++){
                matriz[j][i] = 0;
        }
    }

    do{
        printf("-Lineas disponibles: 1 2 3\n");
        printf("Ingrese el numero de linea: ");
        scanf("%d", &nroLineaAux);

        printf("-Colectivo: 1 al 12\n");
        printf("Ingrese el numero de colectivo: ");
        scanf("%d", &nroColectivoAux);

        printf("Ingrese la recaudacion del viaje: ");
        scanf("%f", &nroRecaudacionAux);

        matriz[nroLineaAux][nroColectivoAux] = matriz[nroLineaAux][nroColectivoAux]+nroRecaudacionAux;

        printf("\nIngrese cualquier caracter para continuar (n para salir): ");
        scanf("%c", &continuar);
    }while(continuar != 'n');

//total por linea
    for(int i=0; i< FILA-1; i++){
        for(int j= 0; j<COLUMNA-1;j++){
            matriz[i][12] = matriz[i][12] + matriz[j][i];
        }
        printf("\n");
    }

//total de todas las lineas
    matriz[3][12] = matriz[0][12]+matriz[1][12]+matriz[2][12];


    /*for(int i=0; i< FILA; i++){
        for(int j= 0; j<COLUMNA;j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }*/




    return 0;
}
