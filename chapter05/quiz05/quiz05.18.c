#include <stdio.h>

void hailstone(int h);

int main(void) {
  int h;
  
  printf("자연수를 하나 입력하세요 : ");
  scanf("%d", &h);

  printf("%d hailstone 수열 : \n", h);
  hailstone(h);
  
  return 0;
}

void hailstone(int h) {
  static int count = 0;
  
  if (h == 1) {
    printf("%3d \n", h);

    count++;

    printf("수열 개수 : %d ", count);
    
    return ;
  }
  else if (h%2 == 0) {
    printf("%3d ", h);

    count++;

    if (count%5 == 0)
      printf("\n");
    
    hailstone(h/2);
  }
  else if (h%2 == 1) {
    printf("%3d ", h);

    count++;

    if (count%5 == 0)
      printf("\n");
    
    hailstone(3*h + 1);
  }
}
