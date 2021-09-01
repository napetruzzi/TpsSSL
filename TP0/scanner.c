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

int get_token(char* buffer){ //NO QUIERO QUE PERDURE PERO SINO ME TIRAR ERROR???
    //int contador = 0;
    int ret = -1;
    char caracter=getchar();
    if(isspace(caracter)==0){

       if(caracter == EOF){
          ret = FDT;
       }

        if(caracter == ','){
           ret = SEP;
        }
        else{
           ret = CAD;
        }
    }
    return ret;
}
#endif
