#include <stdio.h>

int main(void) {
  int f1 = 0, f2 = 1, f3;

  f3 = f1 + f2;

  while (f3 < 100) {
    f1 = f2;
    f2 = f3;
    f3 = f1 + f2;
  }

  printf("100���� ū �Ǻ���ġ���� �� ���� ���� ���� %d �Դϴ�.", f3);

  return 0;
}
