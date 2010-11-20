#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"

/**
 * Mean calculations
 */
double mean(double a, double b){
    return (a + b) / 2;
}

/**
 * Pasa un texto a mayusculas
 */
char *mayusculas(char *txt) {
    char *p, *retval;
    
    printf("Hola\n");
    printf("%s\n", txt);
    
    retval = p = (char *) malloc(sizeof(char) * strlen(txt));
    while (*txt)
        *p++ = *txt++;
    
    *p = (char *)NULL;
    
    return retval;
}