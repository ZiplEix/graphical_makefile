/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** action_enter
*/
#include "graphical_makefile.h"

void click_enter(global *glob)
{
    if (glob->selected->x == 0 && glob->selected->y == 0) {
        endwin();
        free(glob);
        system("make re");
        exit(0);
    }
    if (glob->selected->x == 0 && glob->selected->y == 1) {
        endwin();
        free(glob);
        system("make mouli");
        exit(0);
    }
    if (glob->selected->x == 1 && glob->selected->y == 0) {
        endwin();
        free(glob);
        system("make clean");
        exit(0);
    }
    if (glob->selected->x == 1 && glob->selected->y == 1) {
        endwin();
        free(glob);
        system("make fclean");
        exit(0);
    }
}
