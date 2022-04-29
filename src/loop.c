/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** loop
*/
#include "graphical_makefile.h"

void action(global *glob)
{
    if (glob->touch == '\n') {
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
}

void loop(global *glob)
{
    while (glob->status == EN_COUR) {
        print_option(glob);
        glob->touch = getch();

        if (glob->touch == 'q') {
            if (quit(glob) == 1) {
                return;
            }
        }
        cursor_selector(glob);
        action(glob);
    }
}
