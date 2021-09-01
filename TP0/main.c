#ifndef _MAIN
#define _MAIN

#include "scanner.h"

//cambios por hacer
//asegurarse de leer archivo
//esconder logica dentro de get_token

int main(){

   FILE* flujo = fopen ("entrada.txt","rb");

   char* salida = {"Separador","Cadena"};

   if(flujo == NULL){
      perror("Hubo un error al leer el archivo");
   }

   int posicion = 0;
   char* cadena;


   char caracter = getchar();

      while(true){

         int algo = get_token(flujo);

         if (algo == SEP){
            //devuelde coma
            printf(salida[0],",");

         }
         else{
            while(!esComa(caracter)&& isspace(caracter)== 0){//aun hay elementos
               cadena[posicion] =  caracter;
               posicion++;
               caracter = getchar();
            }
            printf(salida[1],cadena);
            //acumulo????
         }
      }

       fclose(flujo);

       printf("Fin De Texto");
       return 0;

}
#endif

