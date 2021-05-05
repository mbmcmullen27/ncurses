#include <ncurses.h>

int main(){
    char t1[] = "Shall I glub thee";
    char t2[] = " to some fish or an algea or something???";
    initscr();
    addstr(t1);
    addstr(t2);
    refresh();
    getch();

    endwin();
    return(0);
}