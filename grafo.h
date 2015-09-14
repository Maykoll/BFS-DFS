#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

typedef struct tnodo{
	char ciudad;
	char dato;
	char color; 
	int distancia; 
	int tiempo;
	struct tnodo *padre; 
	
}nodo;

nodo iniciaNodo (char nombre){
	nodo modificador;
	modificador.distancia=0;
	modificador.tiempo=0;
	modificador.padre=NULL;
	modificador.color='w';    //blanco
	
	return modificador;

}

void InArreglo_ nodos(nodo arreglo_nodos[8]){   // inicializar el arreglo de nodos
	int i
	for (i=0; i<8; i++){
		arreglo_nodos[i]=iniciaNodo('ciudad'+i);
	}
}

void adyacentes (){

	????
	????
	??
}

