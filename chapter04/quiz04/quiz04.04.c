#include <stdio.h>

int main(void) {
  int x, y, z, w;
  
  printf("세 정수를 입력하세요 : " );
  scanf("%d %d %d", &x, &y, &z);

  x<y ?
    (x<z ? printf("최소값은 %d입니다.\n", x) : printf("최소값은 %d입니다.\n", z)) :
    (y<z ? printf("최소값은 %d입니다.\n", y) : printf("최소값은 %d입니다.\n, z"));

  printf("네 정수를 입력하세요 : ");
  scanf("%d %d %d %d", &x, &y, &z, &w);

  x>y ?
    ( x>z ? (x>w ? printf("최대값은 %d입니다.\n", x) : printf("최대값은 %d입니다.\n", w)) :
      z>w ? printf("최대값은 %d입니다.\n", z) : printf("최대값은 %d입니다.\n", w)) :
    ( y>z ? (y>w ? printf("최대값은 %d입니다.\n", y) : printf("최대값은 %d입니다.\n", w)) :
      z>w ? printf("최대값은 %d입니다.\n", z) : printf("최대값은 %d입니다.\n", w)) ;
    
  return 0;
}
