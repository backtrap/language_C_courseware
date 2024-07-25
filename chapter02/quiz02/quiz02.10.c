#include <stdio.h>

int main(void) {
  printf("%f \n", 3.14);
  printf("%f \n", .14);
  printf("%f \n", 14);
  printf("%f \n", 314e-2);
  printf("%f \n", 0x314p-4); // 314p-4를 0x314p-4로 수정
  printf("%f \n", 0x34p-2); // 034p-2를 0x34p-2fh 수정
  printf("%f \n", 0x15p3);
  printf("%f \n", 0x15p-2); // 0x15e-2를 0x15p-2로 수정

  return 0;
  }
