#include <stdio.h>

int main(void) {
  int x, y, z, w;
  
  printf("�� ������ �Է��ϼ��� : " );
  scanf("%d %d %d", &x, &y, &z);

  x<y ?
    (x<z ? printf("�ּҰ��� %d�Դϴ�.\n", x) : printf("�ּҰ��� %d�Դϴ�.\n", z)) :
    (y<z ? printf("�ּҰ��� %d�Դϴ�.\n", y) : printf("�ּҰ��� %d�Դϴ�.\n, z"));

  printf("�� ������ �Է��ϼ��� : ");
  scanf("%d %d %d %d", &x, &y, &z, &w);

  x>y ?
    ( x>z ? (x>w ? printf("�ִ밪�� %d�Դϴ�.\n", x) : printf("�ִ밪�� %d�Դϴ�.\n", w)) :
      z>w ? printf("�ִ밪�� %d�Դϴ�.\n", z) : printf("�ִ밪�� %d�Դϴ�.\n", w)) :
    ( y>z ? (y>w ? printf("�ִ밪�� %d�Դϴ�.\n", y) : printf("�ִ밪�� %d�Դϴ�.\n", w)) :
      z>w ? printf("�ִ밪�� %d�Դϴ�.\n", z) : printf("�ִ밪�� %d�Դϴ�.\n", w)) ;
    
  return 0;
}
