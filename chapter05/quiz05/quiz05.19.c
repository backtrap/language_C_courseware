#include <stdio.h>

void print_star(int, int);

int main(void) {
  int m, n;
  
  printf("두 수를 입력하세요 : ");
  scanf("%d %d", &m, &n);

  print_star(m, n);

  return 0;
}

void print_star(int m, int n) {
  static int count = 0;
  static int button = 0; // 0이면 올라가고 1이면 내려가는 변수

  if (button == 0) {
    if (m < n) {
      for (int i = 1; i< m + 1; i++)
        printf("*");
      printf("\n");
      
      count++;

      return (print_star(++m, n));
    }
    else if (m == n) {
      button = 1;
      
      for (int i = 1; i< m + 1; i++)
        printf("*");
      printf("\n");

      return (print_star(--m, n));
    }
  }
  else {
    if (m < n && count > 0) {
      for (int i = 1; i< m + 1; i++)
        printf("*");
      printf("\n");

      count--;

      return print_star(--m, n);
    }
    else
      return ;
  }
}
