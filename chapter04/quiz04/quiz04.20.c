#include <stdio.h>

int main(void) {
  int c, total_byte = 0, line_count = 0;
  int a_count = 0;
  int b_count = 0;
  int c_count = 0;
  int d_count = 0;
  int e_count = 0;
  int f_count = 0;
  int g_count = 0;
  int h_count = 0;
  int i_count = 0;
  int j_count = 0;
  int k_count = 0;
  int l_count = 0;
  int m_count = 0;
  int n_count = 0;
  int o_count = 0;
  int p_count = 0;
  int q_count = 0;
  int r_count = 0;
  int s_count = 0;
  int t_count = 0;
  int u_count = 0;
  int v_count = 0;
  int w_count = 0;
  int x_count = 0;
  int y_count = 0;
  int z_count = 0;
  
  while ((c = getchar()) != EOF) {
    total_byte++;

    if (c == '\n')
      ++line_count;

    switch (c) {
      case 'a':
        ++a_count;
        break;
      case 'b' :
        ++b_count;
        break;
      case 'c' :
        ++c_count;
        break;
        case 'd' :
        ++d_count;
        break;
      case 'e' :
        ++e_count;
        break;
      case 'f' :
        ++f_count;
        break;
      case 'g' :
        ++g_count;
        break;
      case 'h' :
        ++h_count;
        break;
      case 'i' :
        ++i_count;
        break;
      case 'j' :
        ++j_count;
        break;
      case 'k' :
        ++k_count;
        break;
      case 'l' :
        ++l_count;
        break;
      case 'm' :
        ++m_count;
        break;
      case 'n' :
        ++n_count;
        break;
      case 'o' :
        ++o_count;
        break;
      case 'p' :
        ++p_count;
        break;
      case 'q' :
        ++q_count;
        break;
      case 'r' :
        ++r_count;
        break;
      case 's' :
        ++s_count;
        break;
      case 't' :
        ++t_count;
        break;
      case 'u' :
        ++u_count;
        break;
      case 'v' :
        ++v_count;
        break;
      case 'w' :
        ++w_count;
        break;
      case 'x' :
        ++x_count;
        break;
      case 'y' :
        ++y_count;
        break;
      case 'z' :
        ++z_count;
        break;
      case 'A':
        ++a_count;
        break;
      case 'B' :
        ++b_count;
        break;
      case 'C' :
        ++c_count;
        break;
      case 'D' :
        ++d_count;
        break;
      case 'E' :
        ++e_count;
        break;
      case 'F' :
        ++f_count;
        break;
      case 'G' :
        ++g_count;
        break;
      case 'H' :
        ++h_count;
        break;
      case 'I' :
        ++i_count;
        break;
      case 'J' :
        ++j_count;
        break;
      case 'K' :
        ++k_count;
        break;
      case 'L' :
        ++l_count;
        break;
      case 'M' :
        ++m_count;
        break;
      case 'N' :
        ++n_count;
        break;
      case 'O' :
        ++o_count;
        break;
      case 'P' :
        ++p_count;
        break;
      case 'Q' :
        ++q_count;
        break;
      case 'R' :
        ++r_count;
        break;
      case 'S' :
        ++s_count;
        break;
      case 'T' :
        ++t_count;
        break;
      case 'U' :
        ++u_count;
        break;
      case 'V' :
        ++v_count;
        break;
      case 'W' :
        ++w_count;
        break;
      case 'X' :
        ++x_count;
        break;
      case 'Y' :
        ++y_count;
        break;
      case 'Z' :
        ++z_count;
        break;
    }
  }

  printf("파일 크기 : %d 바이트\n", total_byte);
  printf("파일 줄 수 : %d 행\n", line_count);
  printf("A : %4d", a_count);
  printf("B : %4d", b_count);
  printf("C : %4d", c_count);
  printf("D : %4d", d_count);
  printf("E : %4d", e_count);
  printf("F : %4d\n", f_count);
  printf("G : %4d", g_count);
  printf("H : %4d", h_count);
  printf("I : %4d", i_count);
  printf("J : %4d", j_count);
  printf("K : %4d", k_count);
  printf("L : %4d\n", l_count);
  printf("M : %4d", m_count);
  printf("N : %4d", n_count);
  printf("O : %4d", o_count);
  printf("P : %4d", p_count);
  printf("Q : %4d", q_count);
  printf("R : %4d\n", r_count);
  printf("S : %4d", s_count);
  printf("T : %4d", t_count);
  printf("U : %4d", u_count);
  printf("V : %4d", v_count);
  printf("W : %4d", w_count);
  printf("X : %4d\n", x_count);
  printf("Y : %4d", y_count);
  printf("Z : %4d", z_count);

  return 0;
}

/*
리눅스 환경에서 실행해보도록 하자
*/
