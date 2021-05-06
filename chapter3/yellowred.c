#include <ncurses.h>

int main(){
    initscr();
    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_RED);
    addstr("Boring old regular text\n");
    attrset(COLOR_PAIR(1));
    addstr("Very cool colored McText!\n");
    attrset(A_NORMAL);
    addstr("Back to normal...\n");
    refresh();
    getch();

    endwin();
    return(0);
}