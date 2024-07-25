#include <stdio.h>
#include <time.h>

int main(void) {
  register int i, n = 100000000000000000;
  clock_t start_clock, end_clock, diff_clock, ex_time;
  float a, b = 1.3, c = 100.2;

  start_clock = clock();

  for (int i = 0; i < n; i++) 
    a = b*c;

  end_clock = clock();
  diff_clock = end_clock - start_clock;

  printf("%d�� ���ϱ� ����ð� : %d Ŭ��\n", n, diff_clock);

  ex_time = diff_clock / CLOCKS_PER_SEC;

  printf("%d�� ���ϱ� ����ð� : %d ��\n", n, ex_time);

  return 0;
}
