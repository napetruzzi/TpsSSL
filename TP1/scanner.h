#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>


enum tokens{
    SEP,
    CAD,
    FDT
};
//[SEP,CAD,FTD]
//   0  1  2

int get_token(char* buffer);
_Bool esComa(char character);
_Bool esCAD(char character);
int obtenerLexema(char* buffer,int token);

#endif
