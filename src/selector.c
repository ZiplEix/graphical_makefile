/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** selector
*/
#include "graphical_makefile.h"

void cursor_selector(global *glob)
{
    if (glob->touch == KEY_DOWN) {
        glob->selected->x++;
        if (glob->selected->x > 1)
            glob->selected->x = 1;
    }
    if (glob->touch == KEY_UP) {
        glob->selected->x--;
        if (glob->selected->x < 0)
            glob->selected->x = 0;
    }
    if (glob->touch == KEY_RIGHT) {
        glob->selected->y++;
        if (glob->selected->y > 1)
            glob->selected->y = 1;
    }
    if (glob->touch == KEY_LEFT) {
        glob->selected->y--;
        if (glob->selected->y < 0)
            glob->selected->y = 0;
    }
}
