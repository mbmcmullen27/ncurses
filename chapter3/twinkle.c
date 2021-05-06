#include <ncurses.h>

int main(){
    initscr();

    attron(A_BOLD);
    addstr("Twinkle, twinkle little star\n");
    
    attron(A_BLINK);
    attron(A_REVERSE);
    addstr("How I wonder what you are.\n");
    
    attroff(A_BOLD);
    attroff(A_REVERSE);
    addstr("Up above the world so high.\n");
    addstr("Like a diamond in the sky.\n");
    
    attron(A_NORMAL);
    addstr("Twinkle, twinkle little star\n");
    addstr("How I wonder what you are.\n");

    refresh();
    getch();
    
    endwin();
    return(0);
}