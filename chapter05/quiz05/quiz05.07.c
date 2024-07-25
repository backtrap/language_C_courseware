#include <stdio.h>

float bmicalc(int, int);

int main(void) {
  int weight, height;
  float bmi;
  
  printf("������ : ");
  scanf("%d", &weight);

  printf("���� : ");
  scanf("%d", &height);

  bmi = bmicalc(weight, height);

  if (bmi <= 18.5)
    printf("��ü���Դϴ�.\n");
  else if (bmi <= 24.9)
    printf("�����Դϴ�.");
  else if (bmi <= 29.9)
    printf("��ü���Դϴ�.");
  else 
    printf("���Դϴ�.");

  return 0;
}

float bmicalc(int weight, int height) {
  float bmi = weight/((float)height*height)*10000;
  
  printf("����� BMI ���� : %.2f\n", bmi);

  return bmi;
}
