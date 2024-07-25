#include <stdio.h>

int main(void) {
  unsigned long long f;
  int n, i;

  while (1) {
    printf("계승을 구할 수를 입력 하세요 : ");
    scanf("%d", &n);

    if (n>=0)
      break;

    printf("음수를 입력했습니다. 양수를 입력하세요.\n");
  }

  // while문 몸체에 있는 break를 만나면 제어는 여기로 넘어옴
  for (f = i = 1; i <= n; i++)
    f *= i;

  printf("%d! = %llu\n", n, f);

  return 0;
}
