#include <ncurses.h>

int main(){
    initscr();

    attrset(A_STANDOUT);
    addstr("this is a A_STANDOUT\n");
    attrset(A_UNDERLINE);
    addstr("this is a A_UNDERLINE\n");
    attrset(A_REVERSE);
    addstr("this is a A_REVERSE\n");
    attrset(A_BLINK);
    addstr("this is a A_BLINK\n");
    attrset(A_DIM);
    addstr("this is a A_DIM\n");
    attrset(A_BOLD);
    addstr("this is a A_BOLD\n");
    attrset(A_ALTCHARSET);
    addstr("this is a A_ALTCHARSET\n");
    attrset(A_INVIS);
    addstr("this is a A_INVIS\n");
    attrset(A_PROTECT);
    addstr("this is a A_PROTECT\n");
    attrset(A_HORIZONTAL);
    addstr("this is a A_HORIZONTAL\n");
    attrset(A_LEFT);
    addstr("this is a A_LEFT\n");
    attrset(A_LOW);
    addstr("this is a A_LOW\n");
    attrset(A_RIGHT);
    addstr("this is a A_RIGHT\n");
    attrset(A_TOP);
    addstr("this is a A_TOP\n");
    attrset(A_VERTICAL);
    addstr("this is a A_VERTICAL\n");
    
    refresh();
    getch();
    
    endwin();
    return(0);
}