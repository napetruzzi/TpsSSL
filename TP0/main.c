#ifndef _MAIN
#define _MAIN

#include "scanner.h"

int main(){
    char cadena[256];

    char*salida[] = {"Separador","Cadena"};

    int token=-1;

    //char caracter = getchar();

    while(token != FDT) {
        token = get_token(cadena);
        if(token!=-1){ //mientras NO sea un espacio

           if(token == SEP){//if(esSeparador(token)) //si es seperador, lo muestra
              //cadena =  caracter;
              printf("\n%s %s",salida[token],",");
           }
           if(token == CAD){

              //obtenerCadena
              char caracter = getchar();
              int posicion = 0;

              while(caracter != ','&& isspace(caracter)== 0){//aun hay elementos
                 cadena[posicion] =  caracter;
                 posicion++;
                 caracter = getchar();
              }
              ungetc(caracter,stdin);
              printf("\n%s %s",salida[token],cadena);
           }
           //esCadena(token,cadena); //si es cadena, la "junta" y muestra

          //printf("\n%s %s",salida[token],cadena); //esto lo encapsulo dentro de esSeparador y esCadena
        }
        memset(cadena,'\0',256);
    }
    //printf("\n%s %s");
    printf("Fin De Texto"); //tengo que ver como formatear esto mejor
    return 0;
}
#endif
