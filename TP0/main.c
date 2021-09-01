#ifndef _MAIN
#define _MAIN

#include "scanner.h"

int main(){
    char buffer[256];

    char*nombre[] = {"Separador","Cadena"};

    int token=-1;

    while(token != FDT) {
        token = get_token(buffer);
        if(token!=-1){ //mientras NO sea un espacio

           if(token == SEP){//if(esSeparador(token)) //si es seperador, lo muestra
              //buffer =  caracter;
              printf("\n%s%s %s",nombre[token],":",",");

           }
           if(token == CAD){

              //obtenerCadena
              char caracter = getchar();
              int posicion = 0;

              while( esCAD(caracter) ){//aun hay elementos
                 buffer[posicion] =  caracter;
                 posicion++;
                 caracter = getchar();
              }
              ungetc(caracter,stdin);
              printf("\n%s%s %s",nombre[token],":",buffer);

           }

           //esCadena(token,buffer); //si es cadena, la "junta" y muestra

          //printf("\n%s %s",nombre[token],buffer); //esto lo encapsulo dentro de esSeparador y esCadena
        }
        memset(buffer,'\0',256);
    }
    printf("\n%s%s","Fin De Texto",":");
    return 0;
}
#endif
