/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** split
*/
#include "lib.h"

int count_line(char *str, char c)
{
    int i = 0;
    int nb_line = 1;

    while (str[i]) {
        if (str[i] == c && str[i + 1] != '\0') {
            nb_line++;
        }
        i++;
    }

    return nb_line;
}

char **my_split(char *str, char splitter)
{
    int i = 0;
    int j = 0;
    int len = 0;
    int nb_line = count_line(str, splitter);
    char **word_array = malloc(sizeof(char *) * (nb_line + 1));
    for (i = 0; i < my_strlen(str); i++) {
        if (str[i] != splitter && str[i] != '\0')
            len++;
        if (str[i] == splitter || str[i] == '\0') {
            word_array[j] = malloc(sizeof(char) * (len + 1));
            word_array[j] = my_strncpy(word_array[j], &str[i - len], len + 1);
            word_array[j++][len] = '\0';
            len = 0;
        }
    }
    word_array[j] = malloc(sizeof(char) * (len + 1));
    word_array[j] = my_strncpy(word_array[j], &str[i - len], len + 1);
    word_array[j][len] = '\0';
    word_array[j + 1] = NULL;
    return word_array;
}
