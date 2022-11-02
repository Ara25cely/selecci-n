#include "librerias.h"

char **construirArreglo(int m, int n){
    char **arr;
    int i;
    arr=(char**)calloc(m,sizeof(char*));
    if(arr==NULL) exit(0);
    for (i=0; i<m; i++){
        arr[i]=(char*)calloc(n,sizeof(char));
        if(arr[i]==NULL){
            printf("Error, no hay memoria disponible");
            exit(i);
        }
    }
    return arr;
}