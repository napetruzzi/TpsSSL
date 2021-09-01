#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

enum tokens{
   FDT,
   SEP,
   CAD,
};

int get_token(char* cadena);

//[FTD,SEP,CAD]

#endif
