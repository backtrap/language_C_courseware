#include <stdio.h>

int is_fib_prime(int);
int F(int);
int is_prime(int n);

int main(void) {
  int count = 1;
  int i = 3;
  
  printf(" n   F(n)\n");
  printf("----------\n");

  while (1) {
    if (is_fib_prime(i) != 0) {
      printf("%2d %5d\n", i, is_fib_prime(i));

      count++;
    }

    i++;
    
    if (count > 3)
      break;
  }

  putchar(' ');
  printf("  . . .");

  return 0;
}

// n번째 피보나치 수를 알려주는 함수
int F(int n) {
  int n1 = 1, n2 = 1;

  if (n == 1 || n == 2)
    return 1;
  else
    return F(n - 1) + F(n - 2); // 재귀함수를 이용
}

// 소수인지 판별하는 함수
int is_prime(int n) {
  for (int i = 2; i < n; i++) {
    if (n%i == 0)
      return 0; // 소수가 아님
  }

  return 1; // 소수가 맞음
}

// 피보나치 소수 판별 함수
// F(n)과 n이 소수인지 판단하는 함수
int is_fib_prime(int n) {
  int fib = F(n);

  if (is_prime(n) && is_prime(fib))
    return F(n); // 피보나치 소수이면 F(n)을 리턴
  else return 0;
}

