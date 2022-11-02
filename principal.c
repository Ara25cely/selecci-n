#include "librerias.h"

int validarDimension(void);
char **construirArreglo(int,int);
void leerArreglo(int, char**);
void metodoSeleccion(int, char**);
void imprimirArreglo(int, char**);
void destruirArreglo(int,char**);

int main(void){
    char **X;
    int N;
        printf("Cuantos elementos hay en el arreglo?\n");
        N=validarDimension();
        printf("Construyendo el arreglo de cadenas..\n");
        X=construirArreglo(N,128);
        printf("Recuperando los valores del archivo..\n");
        leerArreglo(N,X);
        printf("Las cadenas desordendas son:\n");
        imprimirArreglo(N,X);
		printf("\n");
        printf("Ordenando con el metodo de Seleccion..\n");
        metodoSeleccion(N,X);
        printf("Las cadenas del arreglo ordenadas son:\n");
        imprimirArreglo(N,X);
        printf("Destruyendo el arreglo de cadenas..\n");
        destruirArreglo(N,X);
        return 0;
}