#include <stdio.h>

int main(void) {
  int opd1, opd2;
  char op;

  printf("������ �Է��ϼ��� : ");
  scanf("%d", &opd1);

  while ((op = getchar()) == ' ')
    ;

  scanf("%d", &opd2);

  switch(op) {
    case '+' :
      printf("%d + %d = %d\n", opd1, opd2, opd1 + opd2);
      break;
    case '-' :
      printf("%d + %d = %d\n", opd1, opd2, opd1 + opd2);
      break;
    case '*' :
      printf("%d + %d = %d\n", opd1, opd2, opd1 + opd2);
      break;
    case '/' :
      printf("%d + %d = %d\n", opd1, opd2, opd1 + opd2);
      break;
    case '%' :
      printf("%d + %d = %d\n", opd1, opd2, opd1 + opd2);
      break;
    default :
      printf("�߸��� �����Դϴ�.\n");
  }

  return 0;
}
