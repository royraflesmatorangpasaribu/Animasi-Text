#include<ncurses/ncurses.h>
#include<windows.h>

int main(){
	initscr();
	
	mvprintw(10, 40, "Menampilkan Program Animasi Nama");
	mvprintw(11, 40, "Loading");
	for(int baris=48; baris<=57; baris++){
		mvprintw(11, baris, ".");
		refresh();
		Sleep(500);
	}
	clear();
	while(true){
		clear();
		mvprintw(11, 48, "R");
		refresh();
		Sleep(500);
		
		mvprintw(11, 50, "o");
		refresh();
		Sleep(500);
		
		mvprintw(11, 52, "y");
		refresh();
		Sleep(500);	
	}
	getch();
	endwin();
}
