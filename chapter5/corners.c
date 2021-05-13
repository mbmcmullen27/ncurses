#include <ncurses.h>

int main(){

    int lines,cols;
    
    initscr();
    
    getmaxyx(stdscr,lines,cols);
    lines--;
    cols--;

    mvaddch(0,0, '*');
    refresh();
    napms(500);

    mvaddch(0,cols, '*');
    refresh();
    napms(500);

    mvaddch(lines,0, '*');
    refresh();
    napms(500);

    mvaddch(lines,cols, '*');
    refresh();
    getch();

    endwin();
    return(0);
}