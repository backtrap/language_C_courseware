#include <stdio.h>

int main(void) {
  printf("_Bool : %d\n", sizeof(_Bool));
  printf("char : %d\n", sizeof(char));
  printf("short : %d\n", sizeof(short));
  printf("int : %d\n", sizeof(int));
  printf("unsigned : %d\n", sizeof(unsigned));
  printf("long : %d\n", sizeof(long));
  printf("long long : %d\n", sizeof(long long));
  printf("float : %d\n", sizeof(float));
  printf("double : %d\n", sizeof(double));
  printf("long double : %d\n", sizeof(long double));

  return 0;
}
