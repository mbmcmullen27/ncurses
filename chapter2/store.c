#include <ncurses.h>

int main(){
    int amt;
    const float cost = 4.5;


    initscr();
    
    addstr("PRODUCT STORE");
    move(2,0);
    printw("We have product for $%.2f.\n", cost);
    addstr("How many will you purchase? ");
    refresh();
    
    scanw("%d",&amt);

    printw("%d?\n",amt);
    printw("Pay $%.2f\n",cost*(float)amt);
    refresh();
    getch();

    endwin();
    return(0);
}