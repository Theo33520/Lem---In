/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** main
*/

#include "../my_printf/my.h"
#include <unistd.h>
#include "../includes/lem_in.h"
#include "../includes/move.h"
#include <stdio.h>
#include <stdlib.h>

int check_last_newline(t_list *list)
{
    t_list *last = list;
    while (last->next != NULL) {
        last = last->next;
    }
    int len = my_strlen(last->data);
    if (last->data[len - 1] == '\n') {
        return 1;
    } else {
        return 0;
    }
}

int main(int ac, char **av)
{
    t_list *list = NULL;
    t_ant *ant = NULL;
    t_beigin_from_to *list_tuple = NULL;
    if (ac != 1 || av[0] == NULL)
        return 84;
    if (append_to_list(&list) == 84)
        return 84;
    if (list == NULL)
        return 84;
    if (parsing(&list, &list_tuple,ant) == 84)
        return 84;
    return 0;
}
