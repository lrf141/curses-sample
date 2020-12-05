#include <ncurses.h>

int main(int argc, char *argv[])
{
    initscr();

    WINDOW *win = newwin(10,25,0,0);
    WINDOW *win2 = newwin(10,25,11,0);

    box(win, 0, 0);
    box(win2, 0, 0);
    touchwin(win);
    touchwin(win2);
    wprintw(win, "hello,world");
    wprintw(win2, "ncurses sample");
    wrefresh(win);
    wrefresh(win2);

    getchar();

    endwin();
    return 0;
}

