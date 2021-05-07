#include <ncurses.h>

int main(){
    initscr();

    addstr("Attention!\n");
    beep();
    refresh();
    getch();

    addstr("Attention Again!\n");
    flash();
    refresh();
    getch();
    
    endwin();
    return(0);
}