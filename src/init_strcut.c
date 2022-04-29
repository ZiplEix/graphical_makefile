/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** init_strcut
*/
#include "graphical_makefile.h"

void init_struct(global *glob)
{
    glob->status = EN_COUR;
    glob->touch = 0;
    glob->final_commande = NULL;
    glob->make[0] = "RE";
    glob->make[1] = "MOULI";
    glob->make[2] = "CLEAN";
    glob->make[3] = "FCLEAN";
    glob->make[4] = NULL;
    glob->selected = malloc(sizeof(selected));
    glob->selected->x = 0;
    glob->selected->y = 0;
}
