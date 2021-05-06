#include <ncurses.h>

int main(){
    initscr();

    if(!has_colors()){
        endwin();
        puts("Terminal cannot do colors");
        return(1);
    }

    if(start_color() != OK){
        endwin();
        puts("Unable to start colorss.");
        return(1);
    }

    printw("Colors initialized. \n");
    printw("%d colors available. \n", COLORS);
    printw("%d color pairs. \n", COLOR_PAIRS);
    refresh();
    getch();
    
    endwin();
    return(0);
}