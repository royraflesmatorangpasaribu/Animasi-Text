#include<ncurses/ncurses.h>
#include<windows.h>

//fungsi utama dalam C++
int main()
{
	//memulai layar ncurses
	initscr();
	
	//akan melakukan looping ketika kondisi bernilai true
	while(true){
		//membersihkan layar ncurses
		clear();
		
		mvprintw(1,5,"N");
		refresh();
		Sleep(500);
		
		mvprintw(1,7,"G");
		refresh();
		Sleep(500);
		
		mvprintw(1,9,"O");
		refresh();
		Sleep(500);
		
		mvprintw(1,11,"D");
		refresh();
		Sleep(500);
		
		mvprintw(1,13,"I");
		refresh();
		Sleep(500);
		
		mvprintw(1,15,"N");
		refresh();
		Sleep(500);
		
		mvprintw(1,17,"G");
		refresh();
		Sleep(500);
		
	}
	getch();
	endwin();
}
