#include <stdio.h>

int main(void) {
  unsigned char a = 100, b = 200, d;
  signed char c = -50;
  d = a + b + c;

  printf("d = %d", d);
  return 0;
}

/*
unsigned���� signed���� ������ �ϸ�
unsigned������ �ٲ� ����ȴ�
*/
