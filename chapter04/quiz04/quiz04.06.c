#include <stdio.h>

int main(void) {
  int i = 5;

  while (i>0) {
    if (i == 5) {
      printf("*\n");
      i--;
    }
    else if (i == 4) {
      printf("**\n");
      i--;
    }
    else if (i == 3) {
      printf("***\n");
      i--;
    }
    else if (i == 2) {
      printf("****\n");
      i--;
    }
    else if (i == 1) {
      printf("*****\n");
      i--;
    }
  }

  for (int i = 0; i < 5; i++) {
    if (i == 0) {
      printf("*\n");
    }
    else if (i == 1) {
      printf("**\n");
    }
    else if (i == 2) {
      printf("***\n");
    }
    else if (i == 3) {
      printf("****\n");
    }
    else if (i == 4) {
      printf("*****\n");
    }
  }
}
