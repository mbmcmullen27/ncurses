#include <ncurses.h>

int main(){

    int y,x,maxy,maxx;

    initscr();

    getmaxyx(stdscr,maxy,maxx);

    move(maxy/4,0);
    hline(0,maxx/4);
    vline(0,2*(maxy/4));

    move(3*(maxy/4),0);
    hline(0,maxx/4);

    move(maxy/4,3*(maxx/4));
    hline(0,maxx/4);

    move(maxy/4,4*(maxx/4));
    vline(0,2*(maxy/4));

    move(3*(maxy/4),3*(maxx/4));
    hline(0,maxx/4);

    move(0,maxx/4);
    vline(0,maxy/4);
    hline(0,2*(maxx/4));

    move(0,3*(maxx/4));
    vline(0,maxy/4);

    move(maxy-1,maxx/4);
    hline(0,2*(maxx/4));

    move(3*(maxy/4),maxx/4);
    vline(0,maxy/4+2);

    move(3*(maxy/4),3*(maxx/4));
    vline(0,maxy/4+2);







    refresh();
    getchar();

    endwin();
    return(0);
}