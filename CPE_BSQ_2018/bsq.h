/*
** EPITECH PROJECT, 2019
** lib
** File description:
** lib
*/

#ifndef BSQ_H_
#define BSQ_H_

char *algo_1(char *str, int col);
int min(int a, int b, int c);
int parcours(char const *str);
void line_of_X(char *str, int size_square, int i);
char *output(char *str, int tmp, int col);

char *change_map(char *buff2, int line, int col);
int nb_line(char const *str);
int nb_col(char const *str);

int fs_open_file(char const *filepath);
char *fs_return_first_line(char const *file_path);
char *delete_first_line(char *buff, int line, int col);

int main(int ac, char *av[]);
char *output_all_clean(char *str);
void test_char (char *str);

void my_putchar(char c);

int delete(void);

int my_putstr(char const *str);

#endif
