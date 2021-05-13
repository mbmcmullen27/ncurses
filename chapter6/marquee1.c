#include <ncurses.h>
#include <string.h>

int main(){

    char text[] = "Armstrong walks on the moon!";
    char *t;
    int len;

    initscr();

    len = strlen(text);
    t = text;           
    while(len){
        move(5,5);
        insch(*(t+len-1));
        refresh();
        napms(100);
        len--;
    }
    getch();
    
    endwin();
    return(0);
}