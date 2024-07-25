#include <stdio.h>

int main(void) {
  int i = 1, sum = 0, n;

  printf("정수를 입력하세요 : ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
    sum += i;

  printf("1부터 %d까지의 합 : %d\n", i - 1, sum);

  return 0;
}

/*
실행 결과는 다음과 같다.
정수를 입력하세요 : 10
1부터 0까지의 합 : 55

10은 내가 입력한 값이다.

외부의 변수명과 동일한 제어 변수를 사용할 때 제어 변수를 for문에서 새로 선언하면 이전의 변수와 별개로 저장된다.

즉 int i = 1;
for (int i = 0; i < 10; i++)
이렇게 하면 for문이 끝나면
for문의 제어 변수 i는 사라지고
외부에서 선언한 int i = 1만 남는다.

한편 int i = 1;
for (i = 0; i < 10; i++)
이렇게 for문에서 다시 선언하는 것이 아니라 초기화만 다시 하면
for문이 끝나도 외부에서는 for문에서 이루어진 i의 값을 사용할 수 있다.
*/
