/* extraerCadena.c*/

#include "librerias.h"

void extraerCadena(char a[],char b[]){
	int i=0;
	while (a[i]!='\n'){
		if (a[i]=='\r')break;
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
}
