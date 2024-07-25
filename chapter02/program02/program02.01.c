/*
 * 원 둘레 계산기
 * 2018.10.1.
 * by kmh
*/

#include <stdio.h>

int main(void) {
  int radius;    // 반지름
  int diameter;  // 지름
  float pi;      // 파이

  radius = 0;
  pi = 3.14;

  printf("Input radius(integer value) : ");
  // 반지름 입력
  scanf("%d", &radius);
  printf("Radius : %d\n", radius);
  // 지름
  diameter = 2 * radius;
  printf("Diameter : %d\n", diameter);
  // 원 둘레
  printf("Circumference : %.2f\n", diameter * pi);

  return 0;
}
