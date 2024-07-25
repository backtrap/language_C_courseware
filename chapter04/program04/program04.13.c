#include <stdio.h>

int main(void) {
  int n, i, sum;

  printf("n을 입력하세요 : ");
  scanf("%d", &n);

  for (sum = i = 0; i <= n; i++) {
    if (i%2)
      continue;

    sum += i;
    //continue를 만나면 제어는 여기로 넘어옴
  }

  printf("%d까지 짝수의 합 = %d\n", n, sum);

  return 0;
}
