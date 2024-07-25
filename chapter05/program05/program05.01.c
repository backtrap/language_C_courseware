// �Ľ�Į �ﰢ�� ���α׷���
#include <stdio.h>

int factorial(int); // factorial �Լ� ����

int main(void) { // main �Լ� ����
  int height, f_row, f_column, f_row_column;

  printf("�Ľ�Į �ﰢ���� ����(1 ~ 13) : ");
  scanf("%d", &height);

  for (int row = 0; row < height; row++) {
    for (int s = 0; s <= (height - row - 2); s++)
      printf("  ");

    f_row = factorial(row); // factorial �Լ� �̿�

    for (int column = 0; column <= row; column++) {
      f_column = factorial(column);
      f_row_column = factorial(row - column);
      printf("%3d ", f_row/(f_column*f_row_column));
    }
    printf("\n");
    
  }

  return 0;
}

// factorial (n!) ��� �Լ�
int factorial(int n) {// factorial �Լ� ����
  int fac = 1;

  for (int i = 1; i<=n; i++)
    fac *= i;

  return fac;
}  

void pascal_number(int row) {
  int f_row, f_column, f_row_column;

  f_row = factorial(row); // factorial �Լ� ���

  for (int column = 0; column <= row; column++) {
    f_column = factorial(column);
    f_row_column = factorial(row - column);
    printf("%3d ", f_row/(f_column*f_row_column));
  }
  return ;
}
