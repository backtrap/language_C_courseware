#include <stdio.h>

int main(void) {
  unsigned long long f;
  int n, i;

  while (1) {
    printf("����� ���� ���� �Է� �ϼ��� : ");
    scanf("%d", &n);

    if (n>=0)
      break;

    printf("������ �Է��߽��ϴ�. ����� �Է��ϼ���.\n");
  }

  // while�� ��ü�� �ִ� break�� ������ ����� ����� �Ѿ��
  for (f = i = 1; i <= n; i++)
    f *= i;

  printf("%d! = %llu\n", n, f);

  return 0;
}
