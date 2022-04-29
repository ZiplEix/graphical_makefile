/*
** EPITECH PROJECT, 2022
** CMakeTests
** File description:
** my_putstr
*/
#include "lib.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    my_putchar('\n');
}
