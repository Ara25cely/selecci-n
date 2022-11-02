#include "librerias.h"

int validarDimension(void){
    char str[128];
    int n;
    do{
        printf ("N=?");
        fgets(str,128,stdin);
        n=(int)atoi(str);
    }while (n<=0 || n>NMAX);
    return n;
}