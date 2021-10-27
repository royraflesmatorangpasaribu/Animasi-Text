//menggunakan library ncurses
#include "ncurses.h"
//input dan output di C++
#include "iostream"
//menggunakan fungsi delay
#include <unistd.h>

//mendeklarasikan std 
using namespace std;

int main(){
  
  int bilangan;
  int baris, kolom;

//memulai layar ncurses  
  initscr();
//membersihkan layar    
  clear();
  
//menghentikan proses selama 1 detik
  refresh();sleep(1);
  mvprintw(1,5,"             ");
  mvprintw(1,5,"Halo Semuanya");

//menghentikan proses selama 1 detik
  refresh();sleep(1);
  mvprintw(1,5,"             ");
  mvprintw(2,5,"Halo Semuanya");
    
//menghentikan proses selama 1 detik
  refresh();sleep(1);
  mvprintw(2,5,"             ");
  mvprintw(3,5,"Halo Semuanya");

//menghentikan proses selama 1 detik
  refresh();sleep(1);
  mvprintw(3,5,"             ");
  mvprintw(4,5,"Halo Semuanya");

//menghentikan proses selama 1 detik  
  refresh();sleep(1);
  mvprintw(4,5,"             ");
  mvprintw(5,5,"Halo Semuanya");
  clear();
  
  for(baris=5;baris<=14;baris++){
    mvprintw(5,baris,"Halo Semuanya");
    refresh();sleep(1);
    mvprintw(5,baris,"             ");                
  }
  
//membersihkan layar 
    clear();
  
//menghentikan proses selama 1 detik
  refresh();sleep(1);
  mvprintw(5,14,"             ");
  mvprintw(5,14,"Halo Semuanya");

//menghentikan proses selama 1 detik
  refresh();sleep(1);
  mvprintw(5,14,"             ");
  mvprintw(4,14,"Halo Semuanya");
    
//menghentikan proses selama 1 detik
  refresh();sleep(1);
  mvprintw(4,14,"             ");
  mvprintw(3,14,"Halo Semuanya");

//menghentikan proses selama 1 detik
  refresh();sleep(1);
  mvprintw(3,14,"             ");
  mvprintw(2,14,"Halo Semuanya");

//menghentikan proses selama 1 detik  
  refresh();sleep(1);
  mvprintw(2,14,"             ");
  mvprintw(1,14,"Halo Semuanya");
  
//membersihkan layar 
    clear();
  
  
//menampilkan layar
  getch();
//mengakhiri layar ncurses   
  endwin();
//hasil fungsi int   
  return 0;
}
