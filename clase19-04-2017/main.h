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

int function buscarEspacio(personas unaPersona[], int arrayExtension){
    for(int i=0 ; i<= arrayExtension ; i++){
        if(unaPersona[i].estado == 0){
            return i;
        }
    }
    return 0;
}

int function inhabilitarPersona(personas unaPersona[], int arrayExtension, int dni){
    for(int i = 0 ; i<= arrayExtension ; i++){
        if(unaPersona[i].dni == dni){
            unaPersona[i].status = 0;
            return 1;
        }
    }
    return 0;
}

function agregarPersona(personas unaPersona[], int arrayExtension){
    for(int i = 0 ; i<= arrayExtension ; i++){
        if(unaPersona[i].status = 0){

                printf("\nIngrese el DNI: ");
                scanf("%d", &unaPersona[i].dni);
                printf("\nIngrese el nombre: ");
                fflush(stdin);
                scanf("%s", &unaPersona[i].nombre);
                printf("\nIngrese el apellido: ");
                fflush(stdin);
                scanf("%s", &unaPersona[i].apellido);
                printf("\nIngrese el dia: ");
                scanf("%d", &unaPersona[i].nacimiento.dia);
                printf("\nIngrese el mes: ");
                scanf("%d", &unaPersona[i].nacimiento.mes);
                printf("\nIngrese el anio: ");
                scanf("%d", &unaPersona[i].nacimiento.anio);
                unaPersona[i].estado = 1;

            return 1;
        }
    }
    return 0;
}

function listarPersonas(personas unaPersona[], int arrayExtension){
    for(int i = 0 ; i<= arrayExtension ; i++){

            printf("\n%d | %s, %s | %d/%d/%d", unaPersona[i].dni,unaPersona[i].apellido,unaPersona[i].nombre,unaPersona[i].nacimiento.dia,unaPersona[i].nacimiento.mes,unaPersona[i].nacimiento.anio);

            return 1;
    }
    return 0;
}


#endif // MAIN_H_INCLUDED
