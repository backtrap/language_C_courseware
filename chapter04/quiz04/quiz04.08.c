#include <stdio.h>

int main(void) {
  int max; // 최대 일수
  int first; // 1일의 요일
  int def = first%7; // 요일 판별식
  int i = 1;
  
  printf("최대 일 수를 입력 하세요 : " );
  scanf("%d", &max);

  printf("1일의 요일을 입력하세요(0:일요일, 1:월요일, . . .) : ");
  scanf("%d", &first);

  printf(" Su Mo Tu We Th Fr Sa \n");

switch (first%7) {
  case 0 : // 일요일
    for (int j = 0; j<def; j++) 
      printf("   ");
    printf("\n");
    for (int i = 1; i<= 7 - def; i++)     printf(" %d", i);
    printf("\n");
    for (int i = 8 - def; i<= 14 - def; i++)
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
    
    break;
  
  case 1 : // 월요일
  for (int j = 0; j<def; j++) 
    printf("    ");
  printf("\n");
  for (int i = 1; i<= 7 - def; i++)     printf(" %d", i);
  printf("\n");
  for (int i = 8 - def; i<= 14 - def; i++)
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

  break;
  
  case 2 : // 화요일
  for (int j = 0; j<def; j++) 
    printf("   ");
  printf("\n");
  for (int i = 1; i<= 7 - def; i++)     printf(" %d", i);
  printf("\n");
  for (int i = 8 - def; i<= 14 - def; i++)
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

  break;

  case 3 : // 수요일
  for (int j = 0; j<def; j++) 
    printf("   ");
  printf("\n");
  for (int i = 1; i<= 7 - def; i++)     printf(" %d", i);
  printf("\n");
  for (int i = 8 - def; i<= 14 - def; i++)
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

  break;

  case 4 : // 목요일
  for (int j = 0; j<def; j++) 
    printf("   ");
  printf("\n");
  for (int i = 1; i<= 7 - def; i++)     printf(" %d", i);
  printf("\n");
  for (int i = 8 - def; i<= 14 - def; i++)
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

  break;

  case 5 : // 금요일
  for (int j = 0; j<def; j++) 
    printf("   ");
  printf("\n");
  for (int i = 1; i<= 7 - def; i++)     printf(" %d", i);
  printf("\n");
  for (int i = 8 - def; i<= 14 - def; i++)
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

  break;

  case 6 : // 토요일
  for (int j = 0; j<def; j++) 
    printf("   ");
  printf("\n");
  for (int i = 1; i<= 7 - def; i++)     printf(" %d", i);
  printf("\n");
  for (int i = 8 - def; i<= 14 - def; i++)
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
  
  break;
  }

  return 0;
}
