#include <stdio.h>

float bmicalc(int, int);

int main(void) {
  int weight, height;
  float bmi;
  
  printf("몸무게 : ");
  scanf("%d", &weight);

  printf("신장 : ");
  scanf("%d", &height);

  bmi = bmicalc(weight, height);

  if (bmi <= 18.5)
    printf("저체중입니다.\n");
  else if (bmi <= 24.9)
    printf("정상입니다.");
  else if (bmi <= 29.9)
    printf("과체중입니다.");
  else 
    printf("비만입니다.");

  return 0;
}

float bmicalc(int weight, int height) {
  float bmi = weight/((float)height*height)*10000;
  
  printf("당신의 BMI 지수 : %.2f\n", bmi);

  return bmi;
}
