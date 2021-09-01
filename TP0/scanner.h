#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

#include <string.h>
#include <stdlib.h>


enum tokens{
    SEP,
    CAD,
    FDT   //capaz lo saaque de aca
};
//[SEP,CAD,FTD]
//   0  1  2
int get_token(char* buffer);

_Bool esComa(char character);
#endif
