#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct {
  void (*f)(void);
  // pointer to a function
} st;

void myfun(void){
  printf("coucou\n");
  char *temp[] = {"/bin/sh",NULL};
  execve("/bin/sh", temp, NULL);
}

int main(int argc, char * argv[]) {
  st *p1; char *p2;
  
  p1=(st*)malloc(sizeof(st));
  p1->f = myfun;
  p1->f();
  
  free(p1); // p1 is now a dangling pointer
  p2=malloc(sizeof(int)); // memory area of p1 ?
  strcpy(p2,argv[1]); // still TODO
  p1->f();
  // calls any function you want ...
  return 0;
}
