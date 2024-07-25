#include <stdio.h>

int is_prime(int n);

int main(void) {
  int n = 2;
  int count = 0;
  
  printf("20개의 소수를 출력하겠습니다.\n");

  while (1) {
    if (is_prime(n)==1) {
      printf("%d번째 소수는... %d\n", count + 1, n);
      n++;
      count++;
    }
    else {
      n++;
    }

    if (count == 20)
      break;
}

  return 0;
}

int is_prime(int n) {
  for (int i = 2; i < n; i++) {
    if (n%i == 0)
      return 0;
  }

  return 1;
}


