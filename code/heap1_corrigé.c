#include <stdio.h>
#include <stdlib.h>


void f (int a, int b){
    int *p1, *p2, *p3;
    p1 = (int *) malloc (sizeof (int));
    *p1 = a;
    p2 = p1;

    if (a <= b) {
        // On évite de libérer si a <= b, car p2 pointe toujours vers p1
        p3 = (int *) malloc (sizeof (int));
        *p3 = b;
        printf("%d", *p2); // Utilisation sûre
    }

    if (a > b) {
        free(p1); // libérer dans un cas sûr
    }
        p3 = (int *) malloc (sizeof (int));
        *p3 = b;

    // Libérer p3 à la fin pour éviter des fuites de mémoire
    free(p3);
}

int main(int argc, char** argv){
    f(4242, 78);
    return 0;
}