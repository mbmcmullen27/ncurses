#include <ncurses.h>

int main(){
    initscr();
    addstr("glub... glub...");
    refresh();
    getch();
    
    endwin();
    return(0);
}