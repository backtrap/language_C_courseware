#include <stdio.h>

int main(void) {
  int math;

  printf("수학 성적을 입력하세요 : ");
  scanf("%d", &math);

  switch (math / 10) {
    case 10 :
      printf("수학은 A입니다. \n");
      break;
    case 9 :
      printf("수학은 A입니다. \n");
      break;
    case 8 :
      printf("수학은 B입니다. \n");
      break;
    case 7 :
      printf("수학은 C입니다. \n");
      break;
    defalut :
      printf("수학은 F입니다.\n");
  }

  return 0;
}
