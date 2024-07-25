#include <stdio.h>

void convertM2HM(int);

extern int hours, minutes;
extern int hours, minutes;

int main(void) {
  int inputM;

  printf("분을 입력하세요 : ");
  scanf("%d", &inputM);

    convertM2HM(inputM);

  printf("%d분은 %d시간 %d분입니다.\n", inputM, hours, minutes);

  return 0;
}

void convertM2HM(int min) {
  extern int hours, minutes;
  
  hours = min / 60;
  minutes = min % 60;

  return ;
}


