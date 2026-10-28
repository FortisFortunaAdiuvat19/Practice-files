#include <ncurses.h>

int main(){
    int x, y;

    initscr();
    clear();

    getyx(stdscr, y, x);
    printw("X = %d \n"
         "Y = %d"
         ,x , y);
    refresh();

    x = 12;
    y = 30;

    move(y,x);
    printw("This is the new location of X and Y");
    refresh();

    getch();
    endwin();

    return 0;
}