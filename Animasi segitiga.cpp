#include<ncurses/ncurses.h>
#include<windows.h>

int main()
{
	initscr();
	while(true){
		clear();
		mvprintw(1,5,"|");
		refresh();
		Sleep(500);
		
		mvprintw(2,5,"|");
		refresh();
		Sleep(500);
		
		mvprintw(3,5,"|");
		refresh();
		Sleep(500);
		
		mvprintw(3,6,"_");
		refresh();
		Sleep(500);
		
		mvprintw(3,7,"_");
		refresh();
		Sleep(500);
		
		mvprintw(3,8,"\\");
		refresh();
		Sleep(500);
		
		mvprintw(2,7,"\\");
		refresh();
		Sleep(500);
		
		mvprintw(1,6,"\\");
		refresh();
		Sleep(500);
		
	}
	getch();
	endwin();
}
