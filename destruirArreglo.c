/* destruirArreglo.c*/

#include "librerias.h"

void destruirArreglo(int m,char **arr){
	int i;
	for(i=0;i<m;i++) free(arr[i]);
	free(arr);
}
