#include <stdio.h>
#include <math.h>

float pi = 3.141592;

void print_sin();

int main(void) {
  print_sin();

  return 0;
}

void print_sin() {
  for (int i = 0; i < 360; i++) {
    float theta = i*pi/ 180;
    double sin_value = sin(theta);

    for (int j = -10; j < sin_value*10; j++) {
      printf(" ");
    }
    printf("*\n");
  }
  
  return ;
}

