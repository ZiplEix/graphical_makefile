/*
** EPITECH PROJECT, 2022
** graphical_makefile
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #define INFO_CLEAN "              ____  _      _____     _     _   _\n             / ___|| |    | ____|   / \\   | \\ | |\n            | |    | |    |  _|    / _ \\  |  \\| |\n            | |___ | |___ | |___  / ___ \\ | |\\  |\n             \\____||_____||_____|/_/   \\_\\|_| \\_|\n\nDelete all files in the current directory that are normally \ncreated by building the program. Also delete files in other \ndirectories if they are created by this makefile. However, \ndon't delete the files that record the configuration. Also \npreserve files that could be made by building, but normally \naren't because the distribution comes with them. There is no \nneed to delete parent directories that were created with \n'mkdir -p', since they could have existed anyway.\n\nDelete .dvi files here if they are not part of the distribution.\n"
    #define INFO_FCLEAN "        _____  ____  _      _____     _     _   _\n       |  ___|/ ___|| |    | ____|   / \\   | \\ | |\n       | |_  | |    | |    |  _|    / _ \\  |  \\| |\n       |  _| | |___ | |___ | |___  / ___ \\ | |\\  |\n       |_|    \\____||_____||_____|/_/   \\_\\|_| \\_|\n\n                Call the 'clean' target\nDelete all the file made by the compilation and the make, \n               it include the binary file.\n\nIt make the repository ready to be pushed.\n"
    #define INFO_MOULI "              __  __   ___   _   _  _      ___ \n             |  \\/  | / _ \\ | | | || |    |_ _|\n             | |\\/| || | | || | | || |     | | \n             | |  | || |_| || |_| || |___  | | \n             |_|  |_| \\___/  \\___/ |_____||___|\n\nCall the 'fclean' target to clean up the build directory.\n\nThen, if you possess Abricot norminette, will execute abricot\nand will check the code.\n\nIf you don't possess Abricot norminette, won't execute any norminette\n"
    #define INFO_RE "                       ____   _____ \n                      |  _ \\ | ____|\n                      | |_) ||  _|  \n                      |  _ < | |___ \n                      |_| \\_\\|_____|\n\n                Call the targets in order :\n                    fclean -> mouli -> all\n\nTo be use to do a fast complete recompilation of the project.\n\n"

enum global_enum {
    EN_COUR,
    STOP,
    INFO
};

typedef struct selected_s {
    int x;
    int y;
} selected;

typedef struct global_s {
    int status;
    int touch;
    char *final_commande;
    char *make[4];
    selected *selected;
} global;



#endif /* !STRUCT_H_ */
