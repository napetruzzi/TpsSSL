#ifndef _MAIN
#define _MAIN

#include "scanner.h"
int main(){

   //FILE* flujo = fopen ("entrada.txt","rb");
   char cadena [256]; //32 bytes

   char* salida[] = {"Separador","Cadena"}; //no pongo FDT xq no lo usaria

   int posicion = 0;

   //if(flujo == NULL){
   //   perror("Hubo un error al leer el archivo");
   //}

   int token = -1; //capaz conviene inicializarlo
   char caracter=getchar();

      while(token != FDT){

         token = get_token(cadena);

         if (token == SEP){//devuelde coma
            printf(salida[token],",");
         }
         else{
            while(caracter != ','&& isspace(caracter)== 0){//aun hay elementos
               cadena[posicion] =  caracter;
               posicion++;
               caracter = getchar();
            }
            ungetc(caracter,stdin);
            printf(salida[token],cadena);
            //acumulo????
         }
         memset(cadena,'\0',256); //limpio cadena
      }

       //fclose(flujo);

       printf("Fin De Texto");
       return 0;
}
#endif
