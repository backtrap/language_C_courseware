#include <stdio.h>

int main(void) {
  int max; // �ִ� �ϼ�
  int first; // 1���� ����
  int def; // ���� �Ǻ���

  printf("�ִ� �� ���� �Է� �ϼ��� : ");
  scanf("%d", &max);

  printf("1���� ������ �Է��ϼ���(0:�Ͽ���, 1:������, . . .) : ");
  scanf("%d", &first);

  def = first%7;

  printf(" Su Mo Tu We Th Fr Sa\n");

  for (int i = 1; i<=def; i++)
    printf("   ");

  for (int i = 1; i<= 7 - def; i++)
    printf("  %d", i);
  printf("\n");

  for (int i = 8 - def; i<= 9; i++) // �� �ڸ��� ��
    printf("  %d", i);

  for (int i = 10; i<= 14 - def; i++) // 2�ڸ��� ����
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
