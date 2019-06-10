/*
** EPITECH PROJECT, 2018
** my_putctr
** File description:
** my_putstr
*/

#include "../bsq.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
