#include <stdio.h>

int main(void) {
  int i = 1, sum = 0, n = 10;

  i = 1;

  for ( ; i < n ; ) {
   sum += i;
    i += 2;
  }

  printf("1���� %d������ Ȧ�� �� : %d\n", n, sum);

  return 0;
}
