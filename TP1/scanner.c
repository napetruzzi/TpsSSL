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

int obtenerLexema(char* buffer,int token){
   char caracter = getchar();
   int posicion = 0;

   if(esComa(caracter)){

   buffer[posicion] =  caracter;
   token = SEP;
   }
   else{
   while( esCAD(caracter) ){
      buffer[posicion] =  caracter;
      posicion++;
      caracter = getchar();
   }
   ungetc(caracter,stdin);

   token = CAD;
   }
   return token;
}


int get_token(char* buffer){
    char character=getchar();
    int ret = -1;
    memset(buffer,'\0',256);

    if(character == EOF){ //si finaliza
       return FDT;
    }
    if(isspace(character)==0){

       ungetc(character,stdin);

       ret = obtenerLexema(buffer,ret);
    }
    return ret;
}
#endif
