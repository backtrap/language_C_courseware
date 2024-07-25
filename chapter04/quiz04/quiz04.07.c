#include <stdio.h>

int main(void) {
  int num1, num2;
  
  printf("정수 2개를 입력하세요 : ");
  scanf("%d %d", &num1, &num2);

  if (num1<num2) {
    for (int i = num1; i<=num2; i++) {
      for (int j = 0; j<i; j++)
        printf("*");

      printf("\n");
    }
  }
  else if (num1>num2) {
   for (int i = num1; i>=num2; i--) {
     for (int j = 0; j<i; j++)
       printf("*");

     printf("\n");
   } 
  }
  else {
    for (int i = 0; i<num1; i++)
      printf("*");

    printf("\n");
  }

  return 0;
}
