#include <stdio.h>

int main(void) {
  float one = 1.0, zero = 0.0, r1, r2;

  r1 = one / zero;
  r2 = -one / zero;

  printf("1 / 0 = %f\n", r1);
  printf("-1 /0 = %f\n", r2);

  printf("%d\n", 1 / 0);
  printf("%d\n", 1.0 / 0);
  printf("%f\n", 1 / 0);
  printf("%f\n", 1.0 / 0);

  return 0;
}

/*
실행 결과는 다음과 같다.
1 / 0 = inf
-1 /0 = -inf
0
0
inf
inf

변환 명세로 정수를 쓸 경우 정수 연산이든 실수 연산이든 상관없이 0이 저장된다.
변환 명세로 실수를 쓸 경우 inf가 저장된다.
*/
