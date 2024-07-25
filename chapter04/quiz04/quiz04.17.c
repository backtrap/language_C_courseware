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

  printf("���� ũ�� : %d ����Ʈ\n", total_byte);
  printf("���� �� �� : %d ��\n", line_count);
  printf("���ĺ� ���� �� : %d ��\n", alphabet_count);
  printf("���� ���� : %d ��\n", number_count);
  printf("���� ���� �� : %d ��\n", space_count);

  return 0;
}

/*
������ ȯ�濡�� �����غ����� ����
*/
