#include<ncurses/ncurses.h>
#include<windows.h>

int main(){
	initscr();
	

	while(true){
		clear();
		//mengoutput dengan ketentuan posisi kolom, baris
		mvprintw(11, 48, "-");
		refresh();
		Sleep(500);
		
		mvprintw(11, 50, "-");
		refresh();
		Sleep(500);
		
		mvprintw(11, 52, ">");
		refresh();
		Sleep(500);	
	}
	getch();
	endwin();
}
