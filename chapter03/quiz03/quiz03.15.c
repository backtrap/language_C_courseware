#include <stdio.h>
#include <float.h>

int main(void) {
  printf("FLT_MIN = %g\n", FLT_MIN);
  printf("FLT_MAX = %g\n", FLT_MAX);
  printf("FLT_DIG = %d\n", FLT_DIG);
  printf("DBL_MIN = %g\n", DBL_MIN);
  printf("DBL_MAX = %g\n", DBL_MAX);
  printf("DBL_DIG = %d\n", DBL_DIG);
  printf("LDBL_MIN = %Lg\n", LDBL_MIN);
  printf("LDBL_MAX = %Lg\n", LDBL_MAX);
  printf("LDBL_DIG = %d\n", LDBL_DIG);

  return 0;
}

/*
실행 결과는 다음과 같다.
FLT_MIN = 1.17549e-38
FLT_MAX = 3.40282e+38
FLT_DIG = 6
DBL_MIN = 2.22507e-308
DBL_MAX = 1.79769e+308
DBL_DIG = 15
LDBL_MIN = 3.3621e-4932
LDBL_MAX = 1.18973e+4932
LDBL_DIG = 18

이 때 FLT의 변환명세는 %g
DBL의 변환명세는 %g
LDBL의 변환명세는 %Lg이다.
*/
