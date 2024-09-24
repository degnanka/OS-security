#include <stdio.h>
#include <string.h>


int f(){
  char x[4];
  char t1[8];
  scanf("%3s", x);
  strncpy(t1, x, sizeof(t1)-1);
  t1[sizeof(t1)-1] = '\0';
  return 0;
}

int main(int argc, char** argv){

  f();

  return 0;
}
