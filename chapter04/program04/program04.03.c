#include <stdio.h>

int main(void) {
  unsigned long long f;
  int n;

  printf("계승을 구할 수를 입력하세요 : "); // 팩토리얼을 말하는 것 같다.
  scanf("%d", &n);

  printf("%d! = ", n);

  f = n;

  while (--n>0)
    f *= n;

  printf("%llu\n", f);

  return 0;
}
