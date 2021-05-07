#include <ncurses.h>

int main(){
    initscr();

    start_color();
    init_pair(1, COLOR_WHITE,COLOR_BLUE);
    bkgd(COLOR_PAIR(1) | '.');
    // bkgd(COLOR_PAIR(1));
    //bkgd('.'); fills whitespace with '.'
    addstr("This is some text");

    refresh();
    getch();

    endwin();
    return(0);
}