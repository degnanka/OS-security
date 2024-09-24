#include <stdio.h>
#include <math.h>


int main(){

  unsigned int x ; // 32-bits unsigned integer

  x=pow(2,32)-1; // mathlib
  printf("%u\n",x);

  
  if (x+1<10) {
    printf("%u\n",x+1);
    printf("hey, x<9 !\n");
  } else {
    // assume x>=9
    printf("hey, x>=9");
  }

}
