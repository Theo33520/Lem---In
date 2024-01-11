/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** print_list
*/

#include "../my_printf/my.h"
#include <unistd.h>
#include "../includes/lem_in.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_rooms(t_rooms *rooms)
{
    t_rooms *current = NULL;
    current = rooms;
    while (current != NULL) {
        my_printf("%s", current->rooms);
        current = current->next;
    }
}

void print_start(t_start *start)
{
    t_start *current = NULL;
    current = start;
    while (current != NULL) {
        my_printf("%s", current->data);
        current = current->next;
    }
}

void print_end(t_end *end)
{
    t_end *current = NULL;
    current = end;
    while (current != NULL) {
        my_printf("%s", current->data);
        current = current->next;
    }
}

void print_tunnel(t_tunnel *tunnel)
{
    t_tunnel *current = NULL;
    current = tunnel;
    while (current != NULL) {
        my_printf("%s", current->data);
        current = current->next;
    }
}
