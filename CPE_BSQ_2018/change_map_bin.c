/*
** EPITECH PROJECT, 2018
** cnahge_map_bin
** File description:
** bsq
*/

#include "bsq.h"
#include <stdlib.h>

char *change_map(char *buff2, int line, int col)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (5000 * 5000) * 2);

    while (buff2[i + 1] != '\0') {
        if (buff2[i] == '.') {
            str[i] = '1';
        }
        else  if (buff2[i] == 'o')
            str[i] = '0';
        else {
            str[i] = '\n';
        }
        i = i + 1;
    }
    str[i] = '\n';
    return (str);
}

int nb_line(char const *str)
{
    int i = 0;
    int line = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            line = line + 1;
        i = i + 1;
    }
    return (line);
}

int nb_col(char const *str)
{
    int i = 1;
    int col = 1;

    while (str[i] != '\n') {
            col = col + 1;
            i = i + 1;
    }
    return (col);
}
