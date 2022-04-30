/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** divers
*/

int line_number(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            nb++;
        i++;
    }
    return (nb);
}

int biggest_colums(char *str)
{
    int i = 0;
    int temp = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            if (temp > nb)
                nb = temp;
            temp = 0;
            i++;
            continue;
        }
        temp++;
        i++;
    }
    return (nb);
}
