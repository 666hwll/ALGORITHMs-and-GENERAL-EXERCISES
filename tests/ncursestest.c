#include <ncurses.h>

int main() {
	initscr();
	printw("TEST");
	refresh();
	getch();
	endwin();
	return 0;



}
