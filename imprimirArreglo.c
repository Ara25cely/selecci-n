/* imprimirArreglo.c*/

#include "librerias.h"

void imprimirArreglo(int m, char **arr){
	int i;
	for(i=0;i<m;i++){
		printf("%s\n",arr[i]);
	}
}
