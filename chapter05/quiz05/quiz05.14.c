#include <stdio.h>
#include <math.h>

int main(void) {
  double x = 0;

  while (1) {
    int def = pow(x, x);

    if (def == INFINITY) {
      printf("%lf", --x);
      break;
    }
    x += 1000000;
  }
  
  printf("pow(%.1f, %.1f) = %.7e\n", x, x, pow(x, x));
}
