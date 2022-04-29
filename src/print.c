/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** print
*/
#include "graphical_makefile.h"

void option_1_selected(global *glob)
{
    attron(A_STANDOUT);
    mvprintw(LINES / 2 - 2, COLS / 3 - strlen(glob->make[0]) / 2, glob->make[0]);
    attroff(A_STANDOUT);
    mvprintw(LINES / 2 - 2, (COLS / 3) * 2 - strlen(glob->make[1]) / 2, glob->make[1]);
    mvprintw(LINES / 2 + 2, COLS / 3 - strlen(glob->make[2]) / 2, glob->make[2]);
    mvprintw(LINES / 2 + 2, (COLS / 3) * 2 - strlen(glob->make[3]) / 2, glob->make[3]);
}

void option_2_selected(global *glob)
{
    mvprintw(LINES / 2 - 2, COLS / 3 - strlen(glob->make[0]) / 2, glob->make[0]);
    attron(A_STANDOUT);
    mvprintw(LINES / 2 - 2, (COLS / 3) * 2 - strlen(glob->make[1]) / 2, glob->make[1]);
    attroff(A_STANDOUT);
    mvprintw(LINES / 2 + 2, COLS / 3 - strlen(glob->make[2]) / 2, glob->make[2]);
    mvprintw(LINES / 2 + 2, (COLS / 3) * 2 - strlen(glob->make[3]) / 2, glob->make[3]);
}

void option_3_selected(global *glob)
{
    mvprintw(LINES / 2 - 2, COLS / 3 - strlen(glob->make[0]) / 2, glob->make[0]);
    mvprintw(LINES / 2 - 2, (COLS / 3) * 2 - strlen(glob->make[1]) / 2, glob->make[1]);
    attron(A_STANDOUT);
    mvprintw(LINES / 2 + 2, COLS / 3 - strlen(glob->make[2]) / 2, glob->make[2]);
    attroff(A_STANDOUT);
    mvprintw(LINES / 2 + 2, (COLS / 3) * 2 - strlen(glob->make[3]) / 2, glob->make[3]);
}

void option_4_selected(global *glob)
{
    mvprintw(LINES / 2 - 2, COLS / 3 - strlen(glob->make[0]) / 2, glob->make[0]);
    mvprintw(LINES / 2 - 2, (COLS / 3) * 2 - strlen(glob->make[1]) / 2, glob->make[1]);
    mvprintw(LINES / 2 + 2, COLS / 3 - strlen(glob->make[2]) / 2, glob->make[2]);
    attron(A_STANDOUT);
    mvprintw(LINES / 2 + 2, (COLS / 3) * 2 - strlen(glob->make[3]) / 2, glob->make[3]);
    attroff(A_STANDOUT);
}

void print_option(global *glob)
{
    if (glob->selected->x == 0 && glob->selected->y == 0) {
        option_1_selected(glob);
    }
    if (glob->selected->x == 0 && glob->selected->y == 1) {
        option_2_selected(glob);
    }
    if (glob->selected->x == 1 && glob->selected->y == 0) {
        option_3_selected(glob);
    }
    if (glob->selected->x == 1 && glob->selected->y == 1) {
        option_4_selected(glob);
    }
    mvprintw(LINES - 1, 0, "QUIT : Q");
}
