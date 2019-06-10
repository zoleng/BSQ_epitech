/*
** EPITECH PROJECT, 2018
** algo
** File description:
** algo
*/

#include "bsq.h"

char *algo_1(char *str, int col)
{
    int i = 0;

    while (str[i] != '\n')
        i = i + 1;
    while (str[i] != '\0') {
        if (str[i] != '0') {
            if (str[i - col - 2] > '0' &&
                str[i - col - 1] > '0' && str[i - 1] > '0')
                str[i] = min(str[i - col - 2],
                str[i - col - 1], str[i - 1]) + 1;
        }
        i = i + 1;
    }
    return (str);
}

int min(int a, int b, int c)
{
    int m = a;

    if (m > b)
        m = b;
    if (m > c)
        m = c;
    return (m);
}

int parcours(char const *str)
{
    int i = 0;
    int tmp = 0;

    while (str[i] != '\0') {
        if (str[i] > tmp) {
            tmp = str[i];
            i = i + 1;
        }
        else
            i = i + 1;
    }
    return (tmp);
}

void line_of_x(char *str, int size_square, int i)
{
    for (int count = 0; count != size_square; count++) {
        str[i - count] = 'x';
    }
}

char *output(char *str, int tmp, int col)
{
    int count1 = 0;
    int i = 0;

    while (str[i] != tmp)
        i = i + 1;
    for (int count = 48; count != tmp; count++)
        count1 = count1 + 1;
    for (int count3 = 0; count3 != count1; count3++) {
        line_of_x(str, count1, i);
        i = i - col - 1;
    }
    return (str);
}
