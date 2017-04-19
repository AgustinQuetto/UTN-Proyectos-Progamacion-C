#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#define COL 5

typedef struct {
    int dia;
    int mes;
    int anio;
} fechas;

typedef struct {
    int estado;
    int dni;
    char nombre[50];
    char apellido[50];
    fechas nacimiento;
} personas;

#endif // MAIN_H_INCLUDED
