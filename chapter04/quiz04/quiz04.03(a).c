#include <stdio.h>

int main(void) {
  int i;
  printf("1~3 ������ ���ڸ� �Է��ϼ��� : ");
  scanf("%d", &i);

  if (i<1 || i>3) {
      printf("1~3 ������ ���ڸ� �Է��ϼ��� : ");
      scanf("%d", &i);
  }
    
  if (i == 1) 
    printf("cat\ndog");
  else if (i == 2)
    printf("cat\ndog\n");
  else if (i == 3)
    printf("dog\nfox\n");

  return 0;
}
