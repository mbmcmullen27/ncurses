#include <ncurses.h>

int main(){

    WINDOW *sub;

    initscr();

    /* create subwindow on stdscr */
    sub = subwin(stdscr,LINES/4,COLS/4,3*LINES/8,3*COLS/8);
    if ( sub==NULL ) {
        endwin();
        puts("Unable to create subwindow");
        return(1);
    }

    /* draw a box around stdscr */
    box(stdscr, 0, 0);
    box(sub, 0, 0);
    /* put text to the subwindow */
    wmove(sub,1,1);
    waddstr(sub, "I'm in the sub-sandwich window rn.");
    wmove(sub,2,1);
    waddstr(sub, "lol");
    move(1,1);
    waddstr(stdscr, "I'm in the normal window rn :/");
    refresh();
    getch();

    endwin();
    return(0);
}