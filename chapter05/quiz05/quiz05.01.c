#include <stdio.h>

long long power(int, int);

int main(void) {
  printf(" n     2^n     3^n     4^n     5^n\n");
  printf("-----------------------------------\n");

  for (int i = 0; i <= 2; i++) {
    printf(" %d", i);
    printf("%8lld", power(2, i));
    printf("%8lld", power(3, i));
    printf("%8lld", power(4, i));
    printf("%8lld", power(5, i));
    printf("\n");
  }

  printf("            . . . .\n");
  return 0;
}

long long power(int m, int n) {
  long long result = 1;
  
  for (int i = 1; i <= n; i++)
    result *= m;

  return result;
}
