#include <ncurses.h>

int main(){

    int x;

    char text1[] = "Where did that silly cat go?\n";
    char text2[] = "fat";

    initscr();

    addstr(text1);
    refresh();
    getch();

    move(0,15);
    for(x=0;x<5;x++){
        delch();
        refresh();
        napms(250);
    }
    
    // for(x=3;x>=0;x--){
    //     insch(text2[x]);
    //     refresh();
    //     napms(250);
    // }
    
    for(x=0;x<3;x++){
        move(0,15+x);
        insch(text2[x]);
        refresh();
        napms(250);
    }

    getch();

    endwin();
    return(0);
}