#include <ncurses.h>
#include <string.h>
#include <unistd.h>

int main()
{
	initscr();
	timeout(-1);
	start_color();
	init_pair(1, COLOR_RED, COLOR_WHITE);
	bkgd(COLOR_PAIR(1));
	erase();
	addstr("hello, world");
	move(2, 2);
	addstr("hello, java");
	refresh();
	getch();
	endwin();
	return 0;
}
