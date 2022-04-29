/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** quit
*/
#include "graphical_makefile.h"

int quit(global *glob)
{
    clear();
    mvprintw(LINES / 2, COLS / 2 - 11, "Are you sure ? (y/n)");
    glob->touch = getch();
    if (glob->touch == 'y') {
        return 1;
    } else {
        clear();
        print_option(glob);
        refresh();
    }
}
