#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>


enum tokens{
    SEP,
    CAD,
    FDT
};
//[SEP,CAD,FTD]
//   0  1  2

int get_token();
_Bool esComa(char character);
_Bool esCAD(char character);

#endif
