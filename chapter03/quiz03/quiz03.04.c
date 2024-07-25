#include <stdio.h>

int main(void) {
  int a = 0;

  printf("++a + a++ = %d\n", ++a + a++);

  printf("a += ++a´Â %d\n", a += ++a);

  return 0;
  }
