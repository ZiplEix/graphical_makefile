/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

enum global_enum {
    EN_COUR,
    STOP
};

typedef struct selected_s
{
    int x;
    int y;
} selected;

typedef struct global_s
{
    int status;
    int touch;
    char *final_commande;
    char *make[4];
    selected *selected;
} global;



#endif /* !STRUCT_H_ */
