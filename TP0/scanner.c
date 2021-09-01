#ifndef _MAIN
#define _MAIN

#include "scanner.h"

_Bool esComa(char character){
   _Bool a = false;
   if (character == ','){
      a = true;
   }
   return a;
}


int get_token(char* cadena){

     //int posicion = 0;
     char caracter = getchar();
     int ret = -1;
     while(isspace(caracter)== 0){ //mientras no sea un espacio

        if( esComa(caracter)){
           //cadena[posicion] = caracter;
           ret = SEP;
        }
        else{//si es una cadena
           ret = CAD;
           return ret;
           //while(!esComa(caracter)&& isspace(caracter)== 0){//aun hay elementos

          // cadena[posicion] =  caracter;
         //  posicion++;
         //  caracter = getchar();
         //  }
        }
     }
     return ret;
  }

#endif
