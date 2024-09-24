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
  // No shell execution to avoid security risks
}

int main(int argc, char * argv[]) {
  st *p1;
  char *p2;
  
  p1 = (st*)malloc(sizeof(st));
  if (!p1) {
    perror("malloc failed");
    return 1;
  }
  p1->f = myfun;
  p1->f();
  
  free(p1);
  p1 = NULL;  // Avoid dangling pointer
  
  p2 = (char*)malloc(100);  // Allocate sufficient space for p2
  if (!p2) {
    perror("malloc failed");
    return 1;
  }
  
  if (argc > 1) {
    strncpy(p2, argv[1], 99);  // Use strncpy to avoid buffer overflow
    p2[99] = '\0';  // Null-terminate the string
    printf("Copied string: %s\n", p2);
  }
  
  free(p2);  // Free p2 safely
  
  return 0;
}
