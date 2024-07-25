#include <stdio.h>

void factorize(int);

int main(void) {
  int n;
  
  printf("자연수를 입력하세요 : ");
  scanf("%d", &n);

  if (n<=0) {
    printf("양수를 입력하세요.");

    return 0;
  }

  factorize(n);

  return 0;
}

void factorize(int num) { // 소인수 분해 함수
  int n = 2;
  int org = num;
  
  printf("%d = ", num);

  while (1) {
    if (num%n == 0) {
      printf("%d", n);
      
      if (n!=num)
        printf(" * ");

      num /= n;
    }
    if (num%n!=0)
      n++;

    if (n>org)
      break;
  }
}
