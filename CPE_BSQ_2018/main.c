/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "bsq.h"
#include <stdlib.h>

int main(int ac, char *av[])
{
    int i = 0;
    int tmp = 0;
    char *str;
    char *buff = 0;
    int col = 0;
    int line = 0;
    int size = 0;

    if (ac != 2)
        return (84);
    buff = fs_return_first_line(av[1]);
    buff = delete_first_line(buff, line, col);
    test_char(buff);
    col = nb_col(buff);
    line = nb_line(buff);
    str = change_map(buff, line, col);
    str = algo_1(str, col);
    tmp = parcours(str);
    str = output(str, tmp, col);
    output_all_clean(str);
}

char *output_all_clean(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '1' && str[i] < 88) {
            str[i] = '.';
        }
        else if (str[i] == '0')
            str[i] = 'o';
        else
            str[i] = str[i];
    }
    my_putstr(str);
    return (0);
}

void test_char(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '.' && str[i] != 'o' && str[i] != '\n' && str[i] != '\0')
        {
            exit(84);
        }
    }
}
