#include <ncurses.h>

int main(){

    WINDOW *quads[4];
    int pos[4][2] = {
        {0,0},
        {0,1},
        {1,0},
        {1,1}
    };

    char y,x;

    initscr();
    start_color();

    /* configure colors */
    init_pair(1,COLOR_WHITE,COLOR_GREEN);
    init_pair(2,COLOR_WHITE,COLOR_RED);
    init_pair(3,COLOR_BLACK,COLOR_CYAN);
    init_pair(4,COLOR_BLACK,COLOR_YELLOW);
    init_pair(5,COLOR_WHITE,COLOR_BLUE);

    /* create tiny window */
    for (int i=0;i<4;i++) {
        y = pos[i][0] *(LINES/2);
        x = pos[i][1] *(COLS/2);
        quads[i] = newwin(
            LINES/2,
            COLS/2,
            y,
            x
        );

        for (int k=0;k<4;k++) {
            y = pos[k][0];
            x = pos[k][1];
            wprintw(quads[i],"y: %d, x: %d, i:%d\n",y,x,i);
        }
        if(!quads[i]) {
            endwin();
            puts("Unable to create tiny window");
            return(1);
        }
        wbkgd(quads[i],COLOR_PAIR(i+1));
        waddstr(quads[i], "Welcome to the tiny window\n");
    }

    /* standard screen */
    bkgd(COLOR_PAIR(5));
    addstr("This is the standard screen\n");
    addstr("Press Enter");
    refresh();
    getch();

    /* show tiny window */
    for (int i=0;i<4;i++) {
        wrefresh(quads[i]);
    }
    getch();

    /* show stadnard screen again */
    touchwin(stdscr);
    refresh();
    getch();

    endwin();
    return(0);
}