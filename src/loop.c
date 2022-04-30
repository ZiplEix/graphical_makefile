/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** loop
*/
#include "graphical_makefile.h"

void print_infos(char *str)
{
    char **info = my_split(str, '\n');
    int i = 0;
    int line = line_number(str);
    int column = biggest_colums(str);

    while (info[i]) {
        mvprintw(LINES / 2 - line / 2 + i, COLS / 2 - column / 2, info[i]);
        i++;
    }
}

void information_window(global *glob)
{
    int line = 0;
    int column = 0;

    clear();
    if (glob->selected->x == 0 && glob->selected->y == 0) {
        print_infos(INFO_RE);
        mvprintw(LINES - 1, 0, "Press any key to go back");
    }
    if (glob->selected->x == 0 && glob->selected->y == 1) {
        print_infos(INFO_MOULI);
        mvprintw(LINES - 1, 0, "Press any key to go back");
    }
    if (glob->selected->x == 1 && glob->selected->y == 0) {
        print_infos(INFO_CLEAN);
        mvprintw(LINES - 1, 0, "Press any key to go back");
    }
    if (glob->selected->x == 1 && glob->selected->y == 1) {
        print_infos(INFO_FCLEAN);
        mvprintw(LINES - 1, 0, "Press any key to go back");
    }

    glob->touch = getch();
    if (glob->touch == '\n') {
        click_enter(glob);
    } else {
        clear();
        print_option(glob);
        refresh();
    }
}

void action(global *glob)
{
    if (glob->touch == '\n') {
        click_enter(glob);
    }

    if (glob->touch == 'i') {
        information_window(glob);
    }
}

void check_resize(global *glob)
{
    if (glob->touch == KEY_RESIZE) {
        clear();
        print_option(glob);
        refresh();
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

        check_resize(glob);

        cursor_selector(glob);

        action(glob);
    }
}
