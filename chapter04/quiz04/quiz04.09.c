#include <stdio.h>

int main(void) {
  int year, month;
  int max; // �� �� �ִ� �ϼ�
  int def; // ���� �Ǻ���
  
  printf("�⵵�� �Է��ϼ��� : ");
  scanf("%d", &year);

  printf("���� �Է��ϼ��� : ");
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
  
  int all = (year - 1) * 365 + (year -1)/4; // �� ��¥ ��

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

  printf("       %d�� %d��\n", year, month);
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

/*
1�� 1���� ������ ���� �̿��ؼ�
���� ��¥ - 0001.01.01�� �̿��ؼ� �� ��� ��¥�� ���ߴ�.
�� ��� ��¥�� 7�� ������ �Է¹��� ���� ���� ù ������ �˾Ƴ� �� �޷� ���
*/

