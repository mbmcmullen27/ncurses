#include <ncurses.h>
#include <string.h>

int main(){

    char text[] = "Armstrong walks on the moon!";
    char *t;
    char a;
    int len;

    initscr();

    move(5,0);
    for( a='A';a<'Z';a++){
        addch(a);
        addstr("  ");
    }

    len = strlen(text);
    t = text;           

    while(len){
        move(6,5);
        insch(*(t+len-1));
        refresh();
        napms(100);
        len--;
    }
    getch();
    
    endwin();
    return(0);
}