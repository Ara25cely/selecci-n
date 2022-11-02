/* leerArreglo.c*/

#include "librerias.h"

void extraerCadena(char[],char[]);

void leerArreglo(int m, char **arr){
	FILE *fp; char str[128]; int i;
	fp = fopen("./files/alumnos.txt","r");
	if (fp==NULL){
		printf("No se encuentra el archivo!\n");
		exit(1);
	}
	for(i=0;i<m;i++){
		fgets(str,128,fp);
		extraerCadena(str,arr[i]);
	}
	fclose(fp);
}
