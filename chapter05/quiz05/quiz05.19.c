#include <stdio.h>

void print_star(int, int);

int main(void) {
  int m, n;
  
  printf("�� ���� �Է��ϼ��� : ");
  scanf("%d %d", &m, &n);

  print_star(m, n);

  return 0;
}

void print_star(int m, int n) {
  static int count = 0;
  static int button = 0; // 0�̸� �ö󰡰� 1�̸� �������� ����

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
