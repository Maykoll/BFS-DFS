#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdio_h
#endif

typedef  struct tipo_cola{ 
    int tamaño;//capacidad
    int fin; //fin
    int *elementos; //elementos
} Cola;

Cola *creaCola(){    //
    Cola *tmp;
    tmp = malloc(sizeof(Cola));
    tmp->espacio = nEspacio;
    tmp->fin = -1;
    tmp->elementos = malloc(tmp->capacidad*sizeof(char));
    return (tmp);
}

int esVaciaCola(Cola *cola){  //va
    // Asume que cola fue inicializada
    if (cola->fin == -1) {
        return (1);
    }else{
        return (0);
    }
}

int llegada(Cola *cola, int valor){     //ENCOLAR
    if((cola->fin+1) == cola->tamaño) return(-1); //error: cola llena
    cola->fin++;
    cola->elementos[cola->fin] = nuevoElemnto;
    return(1);
}

int atencion(Cola *cola){     // DECOLAR
    if(esVaciaCola(cola)) return (-1);
    int nuevoElemento = cola->elementos[0];
    //se mueven los elementos restantes
    for (int i=0; i<cola->fin; i++) {
        cola->elementos[i] = cola->elementos[i+1];
    }
    cola->fin--;
    return(nuevoElemento); // VER VALOR
	}

void vacia(Cola *cola){   //
    //asume que la cola ha sido inicializada
    while(!esVaciaCola(cola))
        atencion(cola);
}

void eliminaCola(Cola *cola){   //
    free(cola->elementos);
    free(cola);
}

void recorreCola(Cola *cola){   //
    printf("INICIO DE LA COLA\n");
    printf("TAMAÑO COLA = %d\n", cola->fin+1);
    for(int i = 0; i<=cola->fin; i++){
        printf("lista[%d] = %d\n", i, cola->elementos[i]);
    }
    printf("FIN COLA\n\n");
    
}


