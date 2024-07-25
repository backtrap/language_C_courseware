#include <stdio.h>

void factorize(int);

int main(void) {
  int n;
  
  printf("�ڿ����� �Է��ϼ��� : ");
  scanf("%d", &n);

  if (n<=0) {
    printf("����� �Է��ϼ���.");

    return 0;
  }

  factorize(n);

  return 0;
}

void factorize(int num) { // ���μ� ���� �Լ�
  int n = 2;
  int org = num;
  
  printf("%d = ", num);

  while (1) {
    if (num%n == 0) {
      printf("%d", n);
      
      if (n!=num)
        printf(" * ");

      num /= n;
    }
    if (num%n!=0)
      n++;

    if (n>org)
      break;
  }
}
