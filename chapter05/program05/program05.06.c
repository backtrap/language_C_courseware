#include <stdio.h>

int hours, minutes;

void convertM2HM(int);

int main(void) {
  int inputM;

  printf("���� �Է��ϼ��� : ");
  scanf("%d", &inputM);

  convertM2HM(inputM);

  printf("%d���� %d�ð� %d���Դϴ�.\n", inputM, hours, minutes);

  return 0;
}

void convertM2HM(int min) {
  hours = min / 60;
  minutes = min % 60;

  return ;
}
