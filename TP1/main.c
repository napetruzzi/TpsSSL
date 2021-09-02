#ifndef _MAIN
#define _MAIN

#include "scanner.h"

int main(){
    char cadena[256];

    char*salida[] = {"Separador","Cadena"};

    int token=-1;

    while(token != FDT) {

        token = get_token(cadena);
        if(token!=-1){ //mientras NO sea un espacio

           if(token == SEP){
              printf("\n%s%s %s",salida[token],":",",");
           }
           else if(token == CAD){

              obtenerCadena(cadena);
              printf("\n%s%s %s",salida[token],":",cadena);
           }
        }
        memset(cadena,'\0',256);
    }
    printf("\n%s%s","Fin De Texto",":");
    return 0;
}
#endif
