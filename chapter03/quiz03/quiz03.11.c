#include <stdio.h>

int main(void) {
  char c = 'A';

  printf("sizeof(c)        = %u\n", sizeof(c));
  printf("sizeof('A')      = %u\n", sizeof('A'));
  printf("sizeof(c + c)    = %u\n", sizeof(c + c));
  printf("sizeof(c = 'A')  = %u\n", sizeof(c = 'A'));

  return 0;
}

/*
���� �����
sizeof(c)        = 1
sizeof('A')      = 4
sizeof(c + c)    = 4
sizeof(c = 'A')  = 1

sizeof()�� ������ ���� ������ �ڷ����� Ȯ���Ѵ�

sizeof()�� ����� ���� ����� ǥ�� ����� ���󰣴�
���� ��� sizeof('A')�� sizeof(96)�� �ǹ��Ѵ�. 'A'�� ǥ���ϱ� ���� �ƽ�Ű �ڵ� ���� �� ���̴�.

sizeof()�� ���ڿ��� ���� ���ڿ��� ���̸� �ǹ��Ѵٰ� �Ѵ�.

sizeof()�� ������ ������ ���� �ƽ�ũ �ڵ尪�� ���� �������� ��ȯ�Ǿ� ����ȴ�.
���� ��� sizeof(c + c)�� sizeof(96 + 96)�� �ǰ� ������� ������ ũ�⸦ �˷��ش�.
*/
