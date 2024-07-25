#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0;

  for (int i = 0; i < 100; i++) {
    switch(rand()%10) {
      case 0 :
        num0++;
        break;
      case 1 :
        num1++;
        break;
      case 2 :
        num2++;
        break;
      case 3 :
        num3++;
        break;
      case 4 :
        num4++;
        break;
      case 5 :
        num5++;
        break;
      case 6 :
        num6++;
        break;
      case 7 :
        num7++;
        break;
      case 8 :
        num8++;
        break;
      case 9 :
        num9++;
        break;
    }
  }

  int sum = num0 + num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;
  
  printf(" 0 : %d개\n", num0);
  printf(" 1 : %d개\n", num1);
  printf(" 2 : %d개\n", num2);
  printf(" 3 : %d개\n", num3);
  printf(" 4 : %d개\n", num4);
  printf(" 5 : %d개\n", num5);
  printf(" 6 : %d개\n", num6);
  printf(" 7 : %d개\n", num7);
  printf(" 8 : %d개\n", num8);
  printf(" 9 : %d개\n", num9);
  printf(" 총 %d개", sum);

  return 0;
}
