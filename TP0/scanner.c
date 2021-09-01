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


int get_token(){
    char caracter=getchar();
    while(isspace(caracter)==0){ //si lo cambio por esComa no anda??????????
        if(caracter == ','){
           return SEP;
        }
        if(caracter == EOF){
           return FDT;
        }else{
           return CAD;
        }
    }
    return -1;
}
#endif
