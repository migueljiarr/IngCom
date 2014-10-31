#include <stdio.h>

#ifdef __linux__
  #include <ncurses.h>
#endif // Estamos en Gnu/Linux.
#ifdef _WIN32
  #include <curses.h>
#endif // Estamos en Windows.

#include "conec4.h"
//#include "conec4.c"

int main(){
  short i,j;
  char tabla[6][7];
  for (i=0;i<6;i++){
    for (j=0;j<7;j++)
      tabla[i][j]='O';
  }
  win_init();
  win_print(&tabla,sizeof(tabla)/sizeof(tabla[1]),sizeof(tabla[1]));
  getch();
  tabla[5][3]='X';
  refresh();
  clear();
  win_print(&tabla,sizeof(tabla)/sizeof(tabla[1]),sizeof(tabla[1]));
  win_end();

  return 0;
}
