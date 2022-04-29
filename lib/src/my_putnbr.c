/*
** EPITECH PROJECT, 2022
** CMakeTests
** File description:
** my_putnbr
*/
#include "lib.h"

void my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_putnbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
    my_putchar('\n');
}
