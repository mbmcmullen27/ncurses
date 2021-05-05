#include <ncurses.h>

int main(){
    int fish = 874;
    int ss = 65;

    initscr();
    printw("Fishbot is %d bits long\n",fish);
    printw("They have collected %d mega-years",ss);
    printw(" of user data...");
    refresh();
    getch();

    endwin();
    return(0);
}