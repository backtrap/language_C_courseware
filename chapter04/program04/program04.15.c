#include <stdio.h>

int main(void) {
  int math;

  printf("���� ������ �Է��ϼ��� : ");
  scanf("%d", &math);

  switch (math / 10) {
    case 10 :
      printf("������ A�Դϴ�. \n");
      break;
    case 9 :
      printf("������ A�Դϴ�. \n");
      break;
    case 8 :
      printf("������ B�Դϴ�. \n");
      break;
    case 7 :
      printf("������ C�Դϴ�. \n");
      break;
    defalut :
      printf("������ F�Դϴ�.\n");
  }

  return 0;
}
