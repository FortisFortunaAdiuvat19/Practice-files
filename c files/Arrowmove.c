#include <ncurses.h>

int main(){
    int key, x, y;
    initscr();
    
    keypad(stdscr, TRUE);
    noecho();
    x = y = 5;
    while (key != 'q'){
        clear();
        move(0,0);
        printw("Press an arrow key or hit q to exit:");

        move(y,x);
        printw("<-->");
        refresh();

        key = getch();
        if(key == KEY_UP){
            y--;
            if(y<0){
                y = 0;
            };
        };
        if(key == KEY_DOWN){
            y++;
            if(y>60){
                y = 60;
            };
        };
        if(key == KEY_LEFT){
            x--;
            if(x<0){
                x = 0;
            };
        };
        if(key == KEY_RIGHT){
            x++;
            if(x>25){
                x = 25;
            };
        };
    };
    

    endwin();
    return 0;
}