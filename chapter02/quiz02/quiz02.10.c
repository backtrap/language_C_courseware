#include <stdio.h>

int main(void) {
  printf("%f \n", 3.14);
  printf("%f \n", .14);
  printf("%f \n", 14);
  printf("%f \n", 314e-2);
  printf("%f \n", 0x314p-4); // 314p-4�� 0x314p-4�� ����
  printf("%f \n", 0x34p-2); // 034p-2�� 0x34p-2fh ����
  printf("%f \n", 0x15p3);
  printf("%f \n", 0x15p-2); // 0x15e-2�� 0x15p-2�� ����

  return 0;
  }
