#include <stdio.h>

int main(void) {
  unsigned char a = 100, b = 200, d;
  signed char c = -50;
  d = a + b + c;

  printf("d = %d", d);
  return 0;
}

/*
unsigned형과 signed형의 연산을 하면
unsigned형으로 바뀌어서 연산된다
*/
