#include <stdio.h>

void def(unsigned long long);
unsigned long long prime(unsigned long long);
int is_prime(unsigned long long);

int main(void) {
  unsigned long long num;
  
  printf("짝수를 입력하세요 : ");
  scanf("%llu", &num);

  if (num%2 != 0) {
    printf("홀수를 입력했습니다.");
   
    return 0;
  }

  def(num);
  
  return 0;
}

// Goldbach의 추측을 말하는 함수
void def(unsigned long long num) {
  unsigned long long n1, n2;

  for (n1 = 2; n1 < num; n1++) {
    if (is_prime(n1)) {
      n2 = num - n1;

      if (is_prime(n2)) {
        printf("%llu = %llu + %llu\n", num, n1, n2);

        break;
      }
    }
  }  
}

// 소수인지 판별하는 함수
int is_prime(unsigned long long n) {
  for (int i = 2; i < n; i++) {
    if (n%i == 0)
      return 0; // 소수가 아님
  }

  return 1; // 소수가 맞음
}
