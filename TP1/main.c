#ifndef _MAIN
#define _MAIN

#include "scanner.h"

int main(){
    char buffer[256];

    char*salida[] = {"Separador","Cadena","Fin De Texto"};

    int token=-1;

    while(token != FDT) {

       token = get_token(buffer);
        if(token!=-1){ //mientras NO sea un espacio

           printf("\n%s%s %s",salida[token],":",buffer);
        }
    }
    return 0;
}
#endif
