#include <stdio.h>

int main(void) {
  int num1, num2, num3;

  printf("두 정수 값을 입력하세요 : ");
  scanf("%d %d", &num1, &num2);

  num3 = num1 * num2;

  printf("%d * %d = %d\n", num1, num2, num3);
  
  return 0;
}