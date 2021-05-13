#include <ncurses.h>

int main(){

    char text1[] = "This is the first line\n";
    char text2[] = "Line two here\n";
    char text3[] = "the third line\n";
    char text4[] = "Fourth line here\n";
    char text5[] = "and the Fifth line\n";

    initscr();

    addstr(text1);
    addstr(text3);
    addstr(text5);
    refresh();
    getch();

    move(1,0);
    insertln();
    move(3,0);
    insertln();
    refresh();
    getch();
    
    mvaddstr(1,0,text2);
    mvaddstr(3,0,text4);
    refresh();
    getch();

    endwin();
    return(0);
}