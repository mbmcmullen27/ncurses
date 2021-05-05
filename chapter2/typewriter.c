#include <ncurses.h>

int main(){
    int ch;

    initscr();
    printw("Input some text you.\n");
    printw("Press ~ to quit\n");
    refresh();
    
    while((ch = getch()) !='~')
        ;

    endwin();
    return(0);
}