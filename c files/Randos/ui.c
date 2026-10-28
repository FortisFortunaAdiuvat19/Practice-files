#include <ncurses.h>

int main(){
    initscr(); /* Initialize the screen*/
    printw("Press any key :");
    refresh();

    char ltr;
    ltr = getch(); /*getch returns the character pressed on the keyboard*/
    clear();
    printw("You pressed: %c", ltr);
    refresh();

    getch(); /*Basically, press any character to escape?*/
    endwin();

    return 0;
}