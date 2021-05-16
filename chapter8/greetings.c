#include <ncurses.h>

int main(){

    char first[32];
    char last[32];

    initscr();

    addstr("First name: ");
    getnstr(first,32);
    addstr("Last name: ");
    getnstr(last,32);
    printw("Pleased to meet you, %s %s\n", first, last);
    refresh();
    getch();

    endwin();
    return(0);
}