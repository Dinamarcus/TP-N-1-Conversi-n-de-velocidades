#include <stdio.h>
#include <stdlib.h>
#include "tabla.h"

int main (int argc, char *argv[]) {
    

    float inicio = atof(argv[1]);
    float fin = atof(argv[2]);
    float incremento = 1;

    if(argc > 3){
        incremento = atof(argv[3]);
    }
    float aux = inicio + incremento;
    int i = 1;
    while(aux <= fin){
        aux += incremento;
        i++;
    }
    aux = inicio;
    float nudos[i];
    int j = 0;
    while(j<i)
    {
        nudos[j] = aux;
        aux += incremento;
        j++;
    }
    tabla(j,nudos);
    
    return 0;
}