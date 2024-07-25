#include <stdio.h>
#include <math.h>

void poly(int, int, int);

int main(void) {
  int a, b, c;

  while (1) {
    printf("a, b, c를 입력하세요 : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0)
      printf("a가 0입니다. 다시 입력하세요.\n");
    else
      break;
  }

  poly(a, b, c);

  return 0;
}

void poly(int a, int b, int c) {
  float x1, x2, def;
  
  printf("%d*x^2 + %d*x + %d\n", a, b, c);

  def = (float)b*b - 4*a*c;

  if (def > 0) {
    x1 = (-b + sqrt(def))/(2*a);
    x2 = (-b - sqrt(def))/(2*a);

    printf("x1 = %3f\nx2 = %3f\n", x2, x1);
  }
  else if (def == 0) {
    x1 = x2 = (-b)/(2*a);

    printf("x = %.2f", x1);
  }
  else {
    printf("x1 = %.3f - %.3fi\n", -(float)b/(2*a), sqrt(-def)/(2*a));
    printf("x2 = %.3f + %.3fi\n", -(float)b/(2*a), sqrt(-def)/(2*a));
  }
}

/*
허근 부분은 굳이 <complex.h> 헤더를 사용하지 않고
루트 안에 부호를 바꾸어서 넣었다!!
*/
