#include <stdio.h>

int main(void) {
  int max; // �ִ� �ϼ�
  int first; // 1���� ����
  int def = first%7; // ���� �Ǻ���
  int i = 1;
  
  printf("�ִ� �� ���� �Է� �ϼ��� : " );
  scanf("%d", &max);

  printf("1���� ������ �Է��ϼ���(0:�Ͽ���, 1:������, . . .) : ");
  scanf("%d", &first);

  printf(" Su Mo Tu We Th Fr Sa \n");

switch (first%7) {
  case 0 : // �Ͽ���
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
  
  case 1 : // ������
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
  
  case 2 : // ȭ����
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

  case 3 : // ������
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

  case 4 : // �����
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

  case 5 : // �ݿ���
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

  case 6 : // �����
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
