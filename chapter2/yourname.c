#include <ncurses.h>

int main(){
    char first[24];
    char last[32];


    initscr();
    
    printw("What name? ");
    refresh();
    getnstr(first,23);

    printw("Another name? ");
    refresh();
    getnstr(last,31);


    printw("Henlo %s %s, stupid stinky %s, eat missiles ugly!",first,last,last);
    refresh();
    
    getch();

    endwin();
    return(0);
}