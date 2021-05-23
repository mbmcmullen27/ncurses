#include <ncurses.h>

int main(){

    int r;

    initscr();

    addstr("Press Enter to restore the screen");
    refresh();
    getch();

    /*restore the window */
    r = scr_restore("dump.win");
    if( r==ERR ) 
        addstr("\nError reading window file ");

    refresh();
    getch();

    endwin();
    return(0);
}