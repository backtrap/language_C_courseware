#include <stdio.h>

int main(void) {
  unsigned long long f;
  int n, i;

  while (1) {
    printf("����� ���� ���� �Է��ϼ��� : ");
    scanf("%d", &n);

    if (n < 0) {
      printf("������ �Է��߽��ϴ�. ����� �Է��ϼ���.\n");
      continue;
    }

    for (f = i = 1; i <= n; i++)
      f *= i;

    printf("%d! = %llu\n", n, f);
    break;
    //continue�� ������ ����� ����� �Ѿ��
  }

  return 0;
}

/*
continue���� �ݺ������� �ش� ������ ������ �������� �Է��� �� ���� ������ �����Ų��. (���� ������ ó�� �κ����� �̵��Ѵ�.)

break���� break���� ���� �ִ� �ݺ����� Ż���Ų��.
*/
