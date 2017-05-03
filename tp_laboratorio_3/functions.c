#ifndef FUNCTIONS_C_INCLUDED
#define FUNCTIONS_C_INCLUDED

void inicializarEstados(movie peliculas[], int longitud) {
    int i;
    for(i=0; i<longitud; i++) {
        peliculas[i].estado=0;

    }
}

//Validacion de unicamente caracteres enteroericos.
int validarNumero(char entero[]) {
    int i;
    for(i=0; i<strlen(entero); i++) {
        if(!(isdigit(entero[i]))) {
            printf("Debe ingresar solo numeros enteros.\n");
            return 0;
        }
    }
    return 1;
}

//Validacion de unicamente caracteres alfabéticos.
int validarCadena(char caracter[]) {
    int i;
    for(i=0; i<strlen(caracter); i++) {
        if(isdigit(caracter[i]) || ispunct(caracter[i])) {
            printf("Debe ingresar solo caracteres alfabeticos.\n");
            return 0;
        }
    }
    return 1;
}

//Agrega una pelicula al vector siempre y cuando el 'estado' de la fila sea 0.
void agregarNuevaPelicula(movie peliculas[], int longitud) {
    int i;
    char aux[20];
    char auxDNI[20];
    char auxnombre[20];
    int auxInt;
    int correctDNI;
    int flag=0;
    for(i=0; i<longitud; i++) {


        if(persona[i].estado==0) {
            do {
                printf("\nIngrese nombre: ");
                fflush(stdin);
                gets(auxnombre);

            } while(validarCadena(auxnombre)==0);

            do {

                printf("Ingrese edad: ");
                fflush(stdin);
                gets(aux);
            } while(validarNumero(aux)==0);

            do {
                printf("Ingrese DNI: ");
                fflush(stdin);
                gets(auxDNI);
            } while(validarNumero(auxDNI)==0);


            auxInt=atoi(aux);
            correctDNI=atoi(auxDNI);

            persona[i].edad=auxInt;
            persona[i].dni=correctDNI;
            strcpy(persona[i].nombre, auxnombre);
            persona[i].estado=1;



            flag=1;
            printf("%s registrado con exito.\n", persona[i].nombre);
            system("pause");
            break;
        }

    }

    if(!flag) {

        printf("ERROR: no hay espacio suficiente.");
    }
}


/*

int main( void )
{
 FILE *myhtmlfile = fopen("new.html", "w"); // open the file
 fprintf(myhtmlfile,"<HTML><BODY>\n");
 fprintf(myhtmlfile,"<font size=\"5\">Hello, world</font></body></html>");
 fclose(myhtmlfile); // close the file
 system("iexplore new.html"); // open internet explorer to test the page
}

*/

#endif // FUNCTIONS_C_INCLUDED
