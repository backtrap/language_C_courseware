#include <stdio.h>

int main(void) {
  int n, i, sum;

  printf("n�� �Է��ϼ��� : ");
  scanf("%d", &n);

  for (sum = i = 0; i <= n; i++) {
    if (i%2)
      continue;

    sum += i;
    //continue�� ������ ����� ����� �Ѿ��
  }

  printf("%d���� ¦���� �� = %d\n", n, sum);

  return 0;
}
