#include<ncurses/ncurses.h>
#include<windows.h>

int main()
{
	//memulai layar ncurses
	initscr();
	while(true){
		//membersihkan layar ncurses
		clear();
		//mencetak karakter di suatu baris dan kolom
		mvprintw(1,5,"|");
		refresh();
		Sleep(500); //delay
		
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
		
		mvprintw(3,8,"_");
		refresh();
		Sleep(500);
		
		mvprintw(3,9,"_");
		refresh();
		Sleep(500);
		
		mvprintw(3,9,"|");
		refresh();
		Sleep(500);
		
		mvprintw(2,9,"|");
		refresh();
		Sleep(500);
		
		mvprintw(1,9,"|");
		refresh();
		Sleep(500);
		
		mvprintw(0,8,"_");
		refresh();
		Sleep(500);
		
		mvprintw(0,7,"_");
		refresh();
		Sleep(500);
		
		mvprintw(0,6,"_");
		refresh();
		Sleep(500);
		
	}
	getch();
	endwin();
}
