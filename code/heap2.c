#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// clang -fsanitize=address -g heap2.c -o heap2asan

int main(){
  char *login, *passwords;
  login=(char *) malloc(10*sizeof(char));
  //put stuff in login
  strcpy(login,"laure");
  free(login); // login is now a dangling pointer
  // ...
  passwords=(char *) malloc(5*sizeof(char));
  // may re-allocate memory area used by login
  strcpy(passwords,"1234");

  // AND NOWWWWW
  printf("%s\n", login);  // prints the passwords !
  return 0;
}
