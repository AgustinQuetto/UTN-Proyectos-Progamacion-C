#ifndef FUNCTIONS_C_INCLUDED
#define FUNCTIONS_C_INCLUDED
#include "functions.h"

void cargarSeries(eSerie series[])
{
    int idSerie[5]= {100,101,102,103,104};
    int estado[5]= {1,1,1,1,1};
    char titulo[5][30]= {"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]= {9,7,7,6,1};
    char genero[5][30]= {"Comedia","Policial","Ciencia Ficcion","Terror","Comedia"};

    int i;
    for(i=0; i<5; i++)
    {
        series[i].idSerie = idSerie[i];
        strcpy(series[i].titulo, titulo[i]);
        series[i].estado = estado[i];
        series[i].temporadas = temporadas[i];
        strcpy(series[i].genero, genero[i]);
    }

}
void cargarClientes(eCliente clientes[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]= {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int estado[10]= {1,1,1,1,1,1,1,1,1,1};

    int i;

    for(i=0; i<10; i++)
    {
        clientes[i].idCliente = id[i];
        strcpy(clientes[i].nombre, nombres[i]);
        clientes[i].estado = estado[i];

    }

}

void cargarCliente_Serie(eClientes_Series clientesSeries[]){

    int cliente[20] = {1,1,1,2,2,3,4,4,5,5,5,7,8,8,8,9,10,10,10,10};
    int serie[20]= {101,102,103,104,103,101,101,102,104,101,101,101,101,102,103,102,101,103,102,104};
    int i;

    for(i=0; i<20; i++)
    {
        clientesSeries[i].idCliente=cliente[i];
        clientesSeries[i].idSerie = serie[i];
    }
}

void mostrarClientes(eCliente cliente[]){
    for(int i = 0; i < 10; i++){
            if(cliente[i].estado == 1){
                printf("%s\n", cliente[i].nombre);
        }
    }
}

void mostrarClientesConSerie(eCliente cliente[], eSerie series[], eClientes_Series clienteSeries[]){
    //itero clientes y series inner join
    for(int i = 0; i < 20; i++){
            for(int j = 0; j < 10; j++){
            if(clienteSeries[i].idCliente == cliente[j].idCliente){
                for(int k = 0; k < 5; k++){
                if(clienteSeries[i].idSerie == series[k].idSerie){
                    printf("%s esta viendo: %s, %d temporadas, %s\n", cliente[j].nombre, series[k].titulo, series[k].temporadas, series[k].genero);
                }
            }
        }
    }
}
}



#endif // FUNCTIONS_C_INCLUDED
