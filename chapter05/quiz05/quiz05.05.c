#include <stdio.h>

int is_fib_prime(int);
int F(int);
int is_prime(int n);

int main(void) {
  int count = 1;
  int i = 3;
  
  printf(" n   F(n)\n");
  printf("----------\n");

  while (1) {
    if (is_fib_prime(i) != 0) {
      printf("%2d %5d\n", i, is_fib_prime(i));

      count++;
    }

    i++;
    
    if (count > 3)
      break;
  }

  putchar(' ');
  printf("  . . .");

  return 0;
}

// n��° �Ǻ���ġ ���� �˷��ִ� �Լ�
int F(int n) {
  int n1 = 1, n2 = 1;

  if (n == 1 || n == 2)
    return 1;
  else
    return F(n - 1) + F(n - 2); // ����Լ��� �̿�
}

// �Ҽ����� �Ǻ��ϴ� �Լ�
int is_prime(int n) {
  for (int i = 2; i < n; i++) {
    if (n%i == 0)
      return 0; // �Ҽ��� �ƴ�
  }

  return 1; // �Ҽ��� ����
}

// �Ǻ���ġ �Ҽ� �Ǻ� �Լ�
// F(n)�� n�� �Ҽ����� �Ǵ��ϴ� �Լ�
int is_fib_prime(int n) {
  int fib = F(n);

  if (is_prime(n) && is_prime(fib))
    return F(n); // �Ǻ���ġ �Ҽ��̸� F(n)�� ����
  else return 0;
}

