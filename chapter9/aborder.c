#include <ncurses.h>

int main(){

    initscr();

    border('\\','/','_','_',  ACS_DIAMOND,ACS_DIAMOND,ACS_DIAMOND,ACS_DIAMOND);
    move(1,1);
    addstr("Now that's a swell border!\n");
    refresh();
    getch();

    endwin();
    return(0);
}