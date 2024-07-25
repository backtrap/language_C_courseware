#include <stdio.h>

long long power(int, int);

int main(void) {
  int i;

  printf("1) power(4, 5) : %d\n", power(4, 5));
  printf("2) power(5, 4) : %d\n", power(5, 4));

  i = 4;

  printf("1-1) power(i, ++i) : %d\n", power(i, ++i));
  printf("2-1) power(i, --i) : %d\n", power(i, --i));

  return 0;
}

long long power(int m, int n) {
  long long result = 1;

  for (int i = 1; i <= n; i++)
    result *= m;

  return result;
}
