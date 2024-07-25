#include <stdio.h>

int main(void) {
  int max; // 최대 일수
  int first; // 1일의 요일
  int def; // 요일 판별식

  printf("최대 일 수를 입력 하세요 : ");
  scanf("%d", &max);

  printf("1일의 요일을 입력하세요(0:일요일, 1:월요일, . . .) : ");
  scanf("%d", &first);

  def = first%7;

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
