/*
** EPITECH PROJECT, 2022
** CMakeTests
** File description:
** lib
*/

#ifndef LIB_H_
    #define LIB_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <dirent.h>
    #include <errno.h>
    #include <time.h>

void my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
void my_putnbr(int nb);
char **my_str_to_word_array(char *str);
char *my_strncpy(char *dest, char const *src, int n);
int line_number(char *str);
int biggest_colums(char *str);
char **my_split(char *str, char splitter);

#endif /* !LIB_H_ */
