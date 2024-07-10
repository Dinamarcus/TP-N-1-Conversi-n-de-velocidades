#include <stdio.h>
#include "conversion.h"
#include "tabla.h"

void tabla (int nrofilas, float nudos[]) {
    printf("NUDOS  |\tKMH|\n");
    for(int i = 0; i < nrofilas; i++){
        printf("%g  |\t%g|\n", nudos[i], conversion(nudos[i]));
    }
}
