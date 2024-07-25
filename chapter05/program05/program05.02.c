// 파스칼 삼각형 프로그램
#include <stdio.h>

int factorial(int); // factorial 함수 선언
void pascal_number(int);

int main(void) { // main 함수 정의
  int height;

  printf("파스칼 삼각형의 높이(1 ~ 13) : ");
  scanf("%d", &height);

  for (int row = 0; row < height; row++) {
    for (int s = 0; s <= (height - row - 2); s++)
      printf("  ");

    pascal_number(row);
    
    printf("\n");
  }

  return 0;
}

// 파스칼 숫자 계산 함수
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

int factorial (int n) { // factorial 함수 정의
  int fac = 1;

  for (int i = 1; i <= n; i++)
    fac *= i;

  return fac;
}
