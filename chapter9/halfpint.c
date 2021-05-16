#include <ncurses.h>

int main(){

    WINDOW *tiny;

    initscr();
    start_color();

    /* configure colors */
    init_pair(1,COLOR_WHITE,COLOR_BLUE);
    init_pair(2,COLOR_WHITE,COLOR_RED);

    /* create tiny window */
    tiny = newwin(
        LINES/2,
        COLS/2,
        LINES/4,
        COLS/4
    );
    if(!tiny) {
        endwin();
        puts("Unable to create tiny window");
        return(1);
    }
    wbkgd(tiny,COLOR_PAIR(2));
    waddstr(tiny, "Welcome to the tiny window\n");

    /* standard screen */
    bkgd(COLOR_PAIR(1));
    addstr("This is the standard screen\n");
    addstr("Press Enter");
    refresh();
    getch();

    /* show tiny window */
    wrefresh(tiny);
    getch();

    /* show stadnard screen again */
    touchwin(stdscr);
    refresh();
    getch();

    endwin();
    return(0);
}