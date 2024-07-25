#include <stdio.h>

int main(void) {
  int a = 0, b = 0, c = 0, d = 0;

  a = ++b;
  c = d++;
  printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

  return 0;
}

/*
전위 연산자
++value
value에 +1을 한 후
새로운 값을 수식의 값으로 한다

후위 연산자
value++
value 값을 수식의 값으로 한 후
value에 +1을 한다
*/
