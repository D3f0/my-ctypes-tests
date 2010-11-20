#include <stdio.h>
#include <string.h>
#include "mylib.h"

int main(int argc, char **argv){
    char *p = NULL;
    printf("La media caluculada por la librería es %f", mean(0.3, 0.2));
    p = strdup("Alfa");


    p = mayusculas("alfa");
    printf("La cadena devuelta es %s\n", p);
    printf(p);
    printf("Fin\n");
    return 0;
}