#include <stdio.h>

int main(void) {
  int i = 1;

  goto print_1;

  print_1 :
    putchar('1');
    goto print_2;
  
  print_2 :
    putchar('2');
    if (++i == 5)
      goto finish;
    goto print_4;

  print_4 :
    putchar('4');
    goto print_3;

  print_3 :
    putchar('3');
    goto print_2 ;

  finish :
    return 0; 
}
