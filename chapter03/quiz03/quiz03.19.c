#include <stdio.h>

int main(void) {
  float one = 1.0, zero = 0.0, r1, r2;

  r1 = one / zero;
  r2 = -one / zero;

  printf("1 / 0 = %f\n", r1);
  printf("-1 /0 = %f\n", r2);

  printf("%d\n", 1 / 0);
  printf("%d\n", 1.0 / 0);
  printf("%f\n", 1 / 0);
  printf("%f\n", 1.0 / 0);

  return 0;
}

/*
���� ����� ������ ����.
1 / 0 = inf
-1 /0 = -inf
0
0
inf
inf

��ȯ ���� ������ �� ��� ���� �����̵� �Ǽ� �����̵� ������� 0�� ����ȴ�.
��ȯ ���� �Ǽ��� �� ��� inf�� ����ȴ�.
*/
