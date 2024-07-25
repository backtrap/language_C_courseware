#include <stdio.h>

int main(void) {
  char c = 'A';

  printf("sizeof(c)        = %u\n", sizeof(c));
  printf("sizeof('A')      = %u\n", sizeof('A'));
  printf("sizeof(c + c)    = %u\n", sizeof(c + c));
  printf("sizeof(c = 'A')  = %u\n", sizeof(c = 'A'));

  return 0;
}

/*
실행 결과는
sizeof(c)        = 1
sizeof('A')      = 4
sizeof(c + c)    = 4
sizeof(c = 'A')  = 1

sizeof()에 변수가 오면 변수의 자료형을 확인한다

sizeof()에 상수가 오면 상수의 표현 방식을 따라간다
예를 들어 sizeof('A')는 sizeof(96)을 의미한다. 'A'를 표현하기 위한 아스키 코드 값이 온 것이다.

sizeof()에 문자열이 오면 문자열의 길이를 의미한다고 한다.

sizeof()에 문자의 연산이 오면 아시크 코드값의 정수 연산으로 변환되어 적용된다.
예를 들어 sizeof(c + c)는 sizeof(96 + 96)이 되고 결과값인 정수의 크기를 알려준다.
*/
