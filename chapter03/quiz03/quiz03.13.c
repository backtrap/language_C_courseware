#include <stdio.h>

int main(void) {
  float C;

  printf("���� �µ��� �Է��ϼ��� : ");
  scanf("%f", &C);

  printf("%.2f C = %.2f F\n", C, C* 9 / 5 + 32);

  return 0;
}
