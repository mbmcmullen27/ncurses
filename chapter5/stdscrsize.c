#include <ncurses.h>

int main(){

    initscr();

    printw("Window is %d rows by %d columns.\n", LINES,COLS);

    refresh();
    getch();

    endwin();
    return(0);
}