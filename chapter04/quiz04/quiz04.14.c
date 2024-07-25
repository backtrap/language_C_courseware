#include <stdio.h>

int main(void) {
  int i;

  for (i = 0; i < 10; ++i) {
    if (i == 5)
      goto i;
    printf("for :i = %d\n", i);
  }

  i : 
    printf("i = %d\n", i);
    return 0;
}
