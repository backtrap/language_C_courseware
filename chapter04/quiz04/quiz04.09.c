#include <stdio.h>

int main(void) {
  int year, month;
  int max; // 한 달 최대 일수
  int def; // 요일 판별식
  
  printf("년도를 입력하세요 : ");
  scanf("%d", &year);

  printf("월을 입력하세요 : ");
  scanf("%d", &month);

  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    max = 31;
  else if (month == 2) {
    if (year%4 == 0)
      max = 29;
    else
      max = 28;
  }
  else
    max = 30;
  
  int all = (year - 1) * 365 + (year -1)/4; // 총 날짜 수

  if (month == 1) 
    all += 0;
  else if (month == 2)
    all += 31;
  else if (month == 3) {
    if (year % 4 == 0)
      all += 60;
    else 
      all += 59;
  }
  else if (month == 4) {
    if (year % 4 == 0)
      all += 91;
    else 
      all += 90;
  }
  else if (month == 5) {
    if (year % 4 == 0)
      all += 121;
    else 
      all += 120;
  }
  else if (month == 6) {
    if (year % 4 == 0)
      all += 152;
    else 
      all += 151;
  }
  else if (month == 7) {
    if (year % 4 == 0)
      all += 182;
    else 
      all += 181;
  }
  else if (month == 8) {
    if (year % 4 == 0)
      all += 213;
    else 
      all += 212;
  }
  else if (month == 9) {
    if (year % 4 == 0)
      all += 244;
    else 
      all += 243;
  }
  else if (month == 10) {
    if (year % 4 == 0)
      all += 274;
    else 
      all += 273;
  }
  else if (month == 11) {
    if (year % 4 == 0)
      all += 305;
    else 
      all += 304;
  }
  else if (month == 12) {
    if (year % 4 == 0)
      all += 335;
    else 
      all += 334;
  }

  def = all%7;

  printf("       %d년 %d월\n", year, month);
  printf(" Su Mo Tu We Th Fr Sa\n");

  for (int i = 1; i<=def; i++)
    printf("   ");

  for (int i = 1; i<= 7 - def; i++)
    printf("  %d", i);
  printf("\n");

  for (int i = 8 - def; i<= 9; i++) // 한 자리수 끝
    printf("  %d", i);

  for (int i = 10; i<= 14 - def; i++) // 2자리수 시작
    printf(" %d", i);
  printf("\n");

  for (int i = 15 - def; i<= 21 - def; i++)
    printf(" %d", i);
  printf("\n");

  for (int i = 22 - def; i<= 28 - def; i++)
    printf(" %d", i);
  printf("\n");

  for (int i = 29 - def; i<= max; i++)
    printf(" %d", i);
  printf("\n");
  
  return 0;    
}

/*
1년 1일이 월요인 것을 이용해서
현재 날짜 - 0001.01.01을 이용해서 총 경과 날짜를 구했다.
총 경과 날짜를 7로 나누고 입력받은 월에 따라 첫 요일을 알아낸 후 달력 출력
*/

