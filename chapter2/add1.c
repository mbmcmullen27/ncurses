#include <ncurses.h>

int main(){
    char text[] = "The body of text, given for you...";
    char *t;
    
    initscr();
    t = text;

    while(*t){
        addch(*t);
        t++;
        refresh();
        napms(100);
    }

    getch();
    
    endwin();
    return(0);
}