#include <stdio.h>

int main(void) {
  int c, total_byte = 0, line_count = 0, alphabet_count = 0, number_count = 0, space_count = 0;

  while ((c = getchar()) != EOF) {
    total_byte++;

    if (c == '\n')
      ++line_count;
    else if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
      ++alphabet_count;
    else if(48 <= c && c <= 57)
      ++number_count;
    else if(c == ' ')
      ++space_count;
  }

  printf("파일 크기 : %d 바이트\n", total_byte);
  printf("파일 줄 수 : %d 행\n", line_count);
  printf("알파벳 문자 수 : %d 행\n", alphabet_count);
  printf("숫자 문자 : %d 행\n", number_count);
  printf("공백 무자 수 : %d 행\n", space_count);

  return 0;
}

/*
리눅스 환경에서 실행해보도록 하자
*/
