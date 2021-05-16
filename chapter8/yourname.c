#include <ncurses.h>

int main(){

    char name[32];
    int ch;

    initscr();

    do{
        clear();
        addstr("Enter your name: ");
        getnstr(name,32);
        move(1,0);
        printw("Your name is %s. ",name);
        printw("Is this correct? y/n, n=/[^y]/ :");
        ch = getch();
    } while ( ch != 'y');
    move(2,0);
    printw("Henlo, %s\nStupid stinky %s\n",name,name);
    getch();

    endwin();
    return(0);
}