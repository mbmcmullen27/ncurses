#include <ncurses.h>

int main(){

    char text1[] = "This is the first line\n";
    char text2[] = "Line two here\n";
    char text3[] = "The third line\n";
    char text4[] = "Fourth line here\n";
    char text5[] = "and the Fifth line\n";

    initscr();

    addstr(text1);
    addstr(text2);
    addstr(text3);
    addstr(text4);
    addstr(text5);
    refresh();
    getch();

    move(2,0);
    deleteln();
    refresh();
    getch();

    endwin();
    return(0);
}