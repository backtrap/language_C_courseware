/*
 * �� �ѷ� ����
 * 2018.10.1.
 * by kmh
*/

#include <stdio.h>

int main(void) {
  int radius;    // ������
  int diameter;  // ����
  float pi;      // ����

  radius = 0;
  pi = 3.14;

  printf("Input radius(integer value) : ");
  // ������ �Է�
  scanf("%d", &radius);
  printf("Radius : %d\n", radius);
  // ����
  diameter = 2 * radius;
  printf("Diameter : %d\n", diameter);
  // �� �ѷ�
  printf("Circumference : %.2f\n", diameter * pi);

  return 0;
}
