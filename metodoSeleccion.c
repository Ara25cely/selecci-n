#include "librerias.h"


void metodoSeleccion(int n, char **arr){
   
int i,j,k;
char *aux;

for(i=0; i<n-1; i++){
k=i;
strcpy(aux,arr[i]);

	for(j=i+1; j<n; j++){
		if (strcmp(arr[j], aux)<0){
			k=j;
			strcpy(aux,arr[j]);
		} 
	}
	strcpy(arr[k],arr[i]);	
	strcpy(arr[i],aux);
}

}