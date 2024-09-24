/*Source code from Laure Gonnord*/

#include <stdio.h>
#include <stdlib.h>


void f(int a, int b){
  int *p1, *p2, *p3;
  p1 =(int *) malloc (sizeof (int));
  *p1 = a;
  p2 = p1;
  if (a > b)
    free (p1);
  p3 = (int *) malloc (sizeof (int));
  *p3 = b;
  printf ("%d\n", *p2) ; //should be val(a), but oups!
  
 
}

int main(int argc, char** argv){
  f(4242, 78);
  return 0;
}
