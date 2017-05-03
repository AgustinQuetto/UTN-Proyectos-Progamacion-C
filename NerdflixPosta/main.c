#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.c"
#define SIZECLIENTES 10
#define SIZESERIES 5
#define SIZECLIENTESERIES 20

int main()
{

int opc;
eSerie series[SIZESERIES];
eCliente clientes[SIZECLIENTES];
eClientes_Series clienteSeries[SIZECLIENTESERIES];

    //REALIZAR CARGA
    cargarClientes(clientes);
    cargarSeries(series);
    cargarCliente_Serie(clienteSeries);

    printf("Bienvenido al panel de gestion de NerdFlix\n\nIngrese el numero de opcion que desee ejecutar:\n1- mostrar cada uno\n2- mostrar clientes con sus series\n3- por cada serie los clientes que la estan viendo\n4- todos los clientes que ven una serie en particular\n5- La serie menos popular\n6- Todas las series que ven los clientes de nombre\nIngrese su opcion: ");
    scanf("%d", &opc);

    switch(opc){
    case 1:
        mostrarClientes(clientes);
        break;
    case 2:
        mostrarClientesConSerie(clientes, series, clienteSeries);
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    }
    return 0;
}
