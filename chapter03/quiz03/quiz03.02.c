#include <stdio.h>

int main(void) {
  int a, b;
  a = b = 0;
  
  printf("a+++b = %d\n", a+++b);
  printf("a = %d, b = %d\n", a, b);
  
  a = b = 0;
  
  printf("a+ ++b = %d\n", a+ ++b);
  printf("a = %d, b = %d\n", a, b);

  a = b = 0;

  printf("a++ +b = %d\n", a, b);
  printf("a = %d, b = %d\n", a, b);

  return 0;
}

/* 
컴파일러는 연산자 중 가장 긴 것을 먼저 토큰으로 취한다

ex) +++는 ++를 먼저 토큰으로 취한 후 +를 나중에 토큰으로 취한다
*/
