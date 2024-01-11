/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** main
*/

#include "../my_printf/my.h"
#include <unistd.h>
#include "../includes/lem_in.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int read_file(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while (read = getline(&line, &len, stdin) != -1) {
        my_printf("%s",line);
    }
    return 0;
}

void check_comment(char *line,int len_start,int len_end)
{
    if (my_strstr(line, "#") &&
    my_strncmp(line, "##start", len_start) &&
    my_strncmp(line, "##end", len_end)) {
        int i = 1;
        while (line[i] != '#' && line[i] != '\n')
            i++;
        line[i - 1] = '\0';
        my_strcat(line,"\n");
    }
}

int input_valid(char c)
{
    if (c >= '0' && c <= '9' || c == '#' || c == ' ')
        return 1;
    return 0;
}

int read_lines(t_list **list)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    size_t bufsize = 32;
    int len_start = my_strlen("##start") - 1;
    int len_end = my_strlen("##end") - 1;
    while (read = getline(&line, &len, stdin) != -1) {
        if (line[0] == '#' && line[1] != '#')
            continue;
        if (input_valid(line[0]) == 0)
            return 84;
        check_comment(line,len_start,len_end);
        insert_node(list,line);
    }
    free(line);
    return 0;
}

int append_to_list(t_list **list)
{
    int read = read_lines(list);
    if (read == 84)
        return 84;
    else
        return 0;
}
