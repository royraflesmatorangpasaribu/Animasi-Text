#include<ncurses/ncurses.h>
#include<windows.h>

int main()
{
	initscr();
  	mvprintw(11,40,"Loading"); 
  	for(int baris=48;baris<=57;baris++){
    mvprintw(11,baris,"o");
    refresh();
	Sleep(1000);        
  	}
	getch();
	endwin();
}
