#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

void lineaValida(int linea){
    if(linea < 4 && linea > 0){
        linea = linea--;
        return 1;
    }else{
        return 0;
    }
}

void colectivoValido(int colectivo){
    if(colectivo < 13 && colectivo > 0){
        return 1;
    }else{
        return 0;
    }
}

#endif // MAIN_H_INCLUDED
