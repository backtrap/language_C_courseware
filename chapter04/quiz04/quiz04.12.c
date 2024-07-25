#include <stdio.h>

int main(void) {
  int i = 1;

  while (1) {
    if (i == 1)
      putchar('1');

    putchar('2');

    if (i == 4) 
      break;

    putchar('4');
    putchar('3');

    i++;
  }
    
  
  return 0;
}
