// 파스칼 삼각형 프로그램래
#include <stdio.h>

int factorial(int); // factorial 함수 선언

int main(void) { // main 함수 정의
  int height, f_row, f_column, f_row_column;

  printf("파스칼 삼각형의 높이(1 ~ 13) : ");
  scanf("%d", &height);

  for (int row = 0; row < height; row++) {
    for (int s = 0; s <= (height - row - 2); s++)
      printf("  ");

    f_row = factorial(row); // factorial 함수 이용

    for (int column = 0; column <= row; column++) {
      f_column = factorial(column);
      f_row_column = factorial(row - column);
      printf("%3d ", f_row/(f_column*f_row_column));
    }
    printf("\n");
    
  }

  return 0;
}

// factorial (n!) 계산 함수
int factorial(int n) {// factorial 함수 정의
  int fac = 1;

  for (int i = 1; i<=n; i++)
    fac *= i;

  return fac;
}  

void pascal_number(int row) {
  int f_row, f_column, f_row_column;

  f_row = factorial(row); // factorial 함수 사용

  for (int column = 0; column <= row; column++) {
    f_column = factorial(column);
    f_row_column = factorial(row - column);
    printf("%3d ", f_row/(f_column*f_row_column));
  }
  return ;
}
