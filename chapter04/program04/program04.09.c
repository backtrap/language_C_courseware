#include <stdio.h>

int main(void) {
  unsigned long long f;
  int n;

  do {
    printf("����� ���� ���� �Է� �ϼ��� : ");
    scanf("%d", &n);

    if (n < 0)
      printf("\n������ �Է��߽��ϴ�. ����� �Է��ϼ���.\n");
  } while (n<0);

  printf("\n%d! = ", n);

  f = n;

  while (--n)
    f *= n;

  printf("%llu \n", f);

  return 0;
}
