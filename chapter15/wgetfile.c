#include <ncurses.h>

int main(){

    FILE *wfile;
    WINDOW *win;

    initscr();
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_RED);
    refresh();

    /* open file */
    wfile = fopen("window.win","r");
    if( wfile==NULL ) {
        endwin();
        puts("Error reading file");
        return(1);
    }

    /* read window data */
    win = getwin(wfile);
    fclose(wfile);
    wrefresh(win);
    getch();

    endwin();
    return(0);
}