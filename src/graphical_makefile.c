/*
** EPITECH PROJECT, 2022
** CMakeTests
** File description:
** test_cmake
*/
#include "graphical_makefile.h"

int graphical_makefile(void)
{
    global *glob = malloc(sizeof(global));
    init_struct(glob);

    initscr();
    curs_set(0);
    keypad(stdscr, TRUE);

    loop(glob);

    endwin();

    free(glob);
    return 0;
}
