/*Source code from Laurent Mounier*/

#include <stdio.h>
#include <stdlib.h>

//Compile with  : gcc stack1.c  -fno-stack-protector -O0 -o stack1
//Execute with:
//python -c 'print("A "*129)' | xargs ./stack1

int main(int argc, char** argv){
  char t;
  char t1[128];
  int i;
  t=0;
  //  printf("argc=%d, argv[12]=%s\n",argc,argv[12]);
  for (i=0;i<argc;i++) t1[i]=42;
  printf("fake access to disturb the compiler, %d\n", t1[128]);
  printf("value of t is %d\n", t);
  return 0;
}
