#include <stdio.h>

int main(void) {
  unsigned long long f;
  int n, i;

  while (1) {
    printf("계승을 구할 수를 입력하세요 : ");
    scanf("%d", &n);

    if (n < 0) {
      printf("음수를 입력했습니다. 양수를 입력하세요.\n");
      continue;
    }

    for (f = i = 1; i <= n; i++)
      f *= i;

    printf("%d! = %llu\n", n, f);
    break;
    //continue를 만나면 제어는 여기로 넘어옴
  }

  return 0;
}

/*
continue문은 반복문에서 해당 루프의 마지막 문장으로 입력한 후 다음 루프를 실행시킨다. (다음 루프의 처음 부분으로 이동한다.)

break문은 break문이 속해 있는 반복문을 탈출시킨다.
*/
