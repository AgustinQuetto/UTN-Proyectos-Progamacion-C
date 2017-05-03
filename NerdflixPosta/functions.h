#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

typedef struct
{
    int idSerie;
    char titulo[20];
    int temporadas;
    char genero[20];
    int estado;
} eSerie;

typedef struct
{
    int idCliente;
    char nombre[30];
    int estado;

} eCliente;

typedef struct
{
    int idSerie;
    int cont;
} eLoser;

typedef struct
{
    int idCliente;
    int idSerie;
} eClientes_Series;

void cargarSeries(eSerie[]);
void cargarClientes(eCliente[]);
void cargarCliente_Serie(eClientes_Series[]);

void mostrarSeries(eSerie[],int);
void mostrarClientes(eCliente[]);
void mostrarClientesConSerie(eCliente[], eSerie[], eClientes_Series[]);
void mostrarSeriesConClientes(eCliente[], eSerie[], eClientes_Series[], int, int, int);
void mostrarSerieLoser(eCliente[], eSerie[], int, int);
void mostrarClientesTBBT(eCliente[], eSerie[], int, int);

#endif // FUNCTIONS_H_INCLUDED
