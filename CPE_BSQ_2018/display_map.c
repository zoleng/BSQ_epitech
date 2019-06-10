/*
** EPITECH PROJECT, 2018
** display_map
** File description:
** display a map
*/

#include "bsq.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int fs_open_file(char const *filepath)
{
    int fd;

    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        my_putstr("FAILURE\n");
        return (84);
    } else
        return (fd);
}

char *fs_return_first_line(char const *file_path)
{
    char *buff;
    int fd;
    int a = 0;
    struct stat file_file;

    fd = fs_open_file(file_path);
    stat(file_path, &file_file);
    if (fd >= 0) {
        buff = malloc(sizeof(char) * file_file.st_size);
        read(fd, buff, file_file.st_size);
        while (buff[a] != '\n')
            a = a + 1;
        buff[file_file.st_size] = '\0';
        close(fd);
    }
    return (buff);
}

char *delete_first_line(char *buff, int line, int col)
{
    int a = 0;
    int i = 0;
    char *buff2 = malloc(sizeof(char) * (5000 * 5000) * 2);

    while (buff[i] != '.' && buff[i] != 'o')
        i = i + 1;
    while (buff[i] != '\0') {
        buff2[a] = buff[i];
        a = a + 1;
        i = i + 1;
    }
    return (buff2);
}
