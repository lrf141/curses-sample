#include <ncurses.h>
#include <string.h>
#include <unistd.h>

int main()
{
	char *str[3]={"Hello World", "good curses", "java"};
	int key, count = 0;

	initscr();
	noecho();
	cbreak();
	timeout(0);

	while (1) {
		sleep(1);
		erase();
		move(1, 1);
		addstr(str[count]);
		addstr(str[count]);
		refresh();
		count++;
		count %= 3;
		key = getch();
		if (key == 'q') break;
		usleep(100000);
	}
	endwin();
	return 0;
}
