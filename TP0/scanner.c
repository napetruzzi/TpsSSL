#ifndef _MAIN
#define _MAIN
#include "scanner.h"

_Bool esComa(char character){
   _Bool ret = 0;
   if (character == ','){
      ret = 1;
   }
   return ret;
}

_Bool esCAD(char character){
   _Bool ret = 0;
   if (!esComa(character) && isspace(character)== 0){
      ret = 1;
   }
   return ret;
}

int get_token(){
    char caracter=getchar();

    if(caracter == EOF){ //si finaliza
       return FDT;
    }

    if(isspace(caracter)==0){
       if(esComa(caracter)){//si lo cambio por esComa no anda??????????
          return SEP;
       }
       else{
          ungetc(caracter,stdin);
          return CAD;
       }
    }
    return -1;
}
#endif
