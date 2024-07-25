#include <stdio.h>

int count = 0;

int main(void) {
  printf("Never ending...\n");

  count++;

  if (count==10)
    return 0;
  
  main();

  return 0;
}
