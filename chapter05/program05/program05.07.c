#include <stdio.h>

void convertM2HM(int);

extern int hours, minutes;
extern int hours, minutes;

int main(void) {
  int inputM;

  printf("���� �Է��ϼ��� : ");
  scanf("%d", &inputM);

    convertM2HM(inputM);

  printf("%d���� %d�ð� %d���Դϴ�.\n", inputM, hours, minutes);

  return 0;
}

void convertM2HM(int min) {
  extern int hours, minutes;
  
  hours = min / 60;
  minutes = min % 60;

  return ;
}


