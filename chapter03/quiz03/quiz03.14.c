#include <stdio.h>

int main(void) {
  float F;
  
  printf("ȭ���µ��� �Է��ϼ��� : ");
  scanf("%f", &F);

  float C = (F - 32) * 5 / 9;

  printf("%.1f F = %.1f C\n", F, C);

  return 0;
}
