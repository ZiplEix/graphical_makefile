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
    mvprintw(LINES / 2 - 2, COLS / 3 - strlen(RE) / 2, RE);
    attroff(A_STANDOUT);
    mvprintw(LINES / 2 - 2, (COLS / 3) * 2 - strlen(MOULI) / 2, MOULI);
    mvprintw(LINES / 2 + 2, COLS / 3 - strlen(CLEAN) / 2, CLEAN);
    mvprintw(LINES / 2 + 2, (COLS / 3) * 2 - strlen(FCLEAN) / 2, FCLEAN);
}

void option_2_selected(global *glob)
{
    mvprintw(LINES / 2 - 2, COLS / 3 - strlen(RE) / 2, RE);
    attron(A_STANDOUT);
    mvprintw(LINES / 2 - 2, (COLS / 3) * 2 - strlen(MOULI) / 2, MOULI);
    attroff(A_STANDOUT);
    mvprintw(LINES / 2 + 2, COLS / 3 - strlen(CLEAN) / 2, CLEAN);
    mvprintw(LINES / 2 + 2, (COLS / 3) * 2 - strlen(FCLEAN) / 2, FCLEAN);
}

void option_3_selected(global *glob)
{
    mvprintw(LINES / 2 - 2, COLS / 3 - strlen(RE) / 2, RE);
    mvprintw(LINES / 2 - 2, (COLS / 3) * 2 - strlen(MOULI) / 2, MOULI);
    attron(A_STANDOUT);
    mvprintw(LINES / 2 + 2, COLS / 3 - strlen(CLEAN) / 2, CLEAN);
    attroff(A_STANDOUT);
    mvprintw(LINES / 2 + 2, (COLS / 3) * 2 - strlen(FCLEAN) / 2, FCLEAN);
}

void option_4_selected(global *glob)
{
    mvprintw(LINES / 2 - 2, COLS / 3 - strlen(RE) / 2, RE);
    mvprintw(LINES / 2 - 2, (COLS / 3) * 2 - strlen(MOULI) / 2, MOULI);
    mvprintw(LINES / 2 + 2, COLS / 3 - strlen(CLEAN) / 2, CLEAN);
    attron(A_STANDOUT);
    mvprintw(LINES / 2 + 2, (COLS / 3) * 2 - strlen(FCLEAN) / 2, FCLEAN);
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
