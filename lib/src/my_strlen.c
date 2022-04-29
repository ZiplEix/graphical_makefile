/*
** EPITECH PROJECT, 2022
** CMakeTests
** File description:
** my_strlen
*/
#include "lib.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
