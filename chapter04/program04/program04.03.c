#include <stdio.h>

int main(void) {
  unsigned long long f;
  int n;

  printf("����� ���� ���� �Է��ϼ��� : "); // ���丮���� ���ϴ� �� ����.
  scanf("%d", &n);

  printf("%d! = ", n);

  f = n;

  while (--n>0)
    f *= n;

  printf("%llu\n", f);

  return 0;
}
