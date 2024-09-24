#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char t; 
    char t1[128];
    int i, n;
    
    t = 0;
    
    if (argc > 1) {
        n = atoi(argv[1]); // Convertir argv[1] en entier
        if (n > 128) n = 128; // S'assurer qu'on ne dépasse pas la taille de t1
    } else {
        n = 0; // Si aucun argument n'est fourni, n est 0
    }

    for (i = 0; i < n; i++) {
        t1[i] = 42; // Remplit t1 avec la valeur 42 ('*' en ASCII)
    }

    printf("t's value is: %d \n", t); // Imprime la valeur de t (toujours 0)
    
    return 0;
}