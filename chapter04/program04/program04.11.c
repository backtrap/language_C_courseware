#include <stdio.h>

int main(void) {
  int f1 = 0, f2 = 1, f3;

  f3 = f1 + f2;

  for ( ; ; ) {
    f1 = f2;
    f2 = f3;
    f3 = f1 + f2;

    if (f3 > 100)
      break;
  }

  printf("100���� ū �Ǻ���ġ���� �� ���� ���� ���� %d �Դϴ�. \n", f3);

  return 0;
}
