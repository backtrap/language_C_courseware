#include <stdio.h>
#include <limits.h>

int main(void) {
  printf("%d \n", CHAR_MIN);
  printf("%d \n", CHAR_MAX);
  printf("%d \n", SCHAR_MIN);
  printf("%d \n", SCHAR_MAX);
  printf("%d \n", UCHAR_MAX);
  printf("%d \n", SHRT_MIN);
  printf("%d \n", SHRT_MAX);
  printf("%d \n", USHRT_MAX);
  printf("%d \n", INT_MIN);
  printf("%d \n", INT_MAX);
  printf("%d \n", UINT_MAX);
  printf("%ld \n", LONG_MIN);
  printf("%ld \n", LONG_MAX);
  printf("%ld \n", ULONG_MAX);
  printf("%lld \n", LLONG_MIN);
  printf("%lld \n", LLONG_MAX);
  printf("%lld \n", ULLONG_MAX);

  return 0;
}
