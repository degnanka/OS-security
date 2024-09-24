#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){

  unsigned int x ; // 32-bits unsigned integer

  x=pow(2,32)-1; // mathlib
  printf("%u\n",x);

  // résolution en lisant INT30-C
  if (UINT_MAX - x < 1) {
    printf("hey, unsigned wrap: error\n");
    return -1;
  }
  
  if (x+1<10) {
    printf("%u\n",x+1);
    printf("hey, x<9 !\n");
  } else {
    // assume x>=9
    printf("hey, x>=9");
  }

}
