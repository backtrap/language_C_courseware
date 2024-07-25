#include <stdio.h>

void def(unsigned long long);
unsigned long long prime(unsigned long long);
int is_prime(unsigned long long);

int main(void) {
  unsigned long long num;
  
  printf("¦���� �Է��ϼ��� : ");
  scanf("%llu", &num);

  if (num%2 != 0) {
    printf("Ȧ���� �Է��߽��ϴ�.");
   
    return 0;
  }

  def(num);
  
  return 0;
}

// Goldbach�� ������ ���ϴ� �Լ�
void def(unsigned long long num) {
  unsigned long long n1, n2;

  for (n1 = 2; n1 < num; n1++) {
    if (is_prime(n1)) {
      n2 = num - n1;

      if (is_prime(n2)) {
        printf("%llu = %llu + %llu\n", num, n1, n2);

        break;
      }
    }
  }  
}

// �Ҽ����� �Ǻ��ϴ� �Լ�
int is_prime(unsigned long long n) {
  for (int i = 2; i < n; i++) {
    if (n%i == 0)
      return 0; // �Ҽ��� �ƴ�
  }

  return 1; // �Ҽ��� ����
}
