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

void obtenerCadena(char* cadena){

   char caracter = getchar();
   int posicion = 0;

   while( esCAD(caracter) ){
      cadena[posicion] =  caracter;
      posicion++;
      caracter = getchar();
   }
   ungetc(caracter,stdin);

}


int get_token(){
    char character=getchar();

    if(character == EOF){ //si finaliza
       return FDT;
    }

    if(isspace(character)==0){
       if(esComa(character)){
          return SEP;
       }
       else{
          ungetc(character,stdin);
          return CAD;
       }
    }
    return -1;
}
#endif
