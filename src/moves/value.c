/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** main
*/

#include "move.h"
#include "lem_in.h"
#include "../my_printf/my.h"

void charged_value(t_list *list,t_value *value)
{
    t_list *tmp = list;
    int len_start = my_strlen("##start") - 1;
    int len_end = my_strlen("##end") - 1;
    int i = 0;
    int j = 0;
    while (tmp) {
        if (my_strncmp(tmp->data,"##start",len_start) == 0) {
            while (!is_space(tmp->next->data[i])) {
                i++;
            }
            tmp->next->data[i] = '\0';
            value->start = my_getnbr(tmp->next->data);
        } if (my_strncmp(tmp->data,"##end",len_end) == 0) {
            while (!is_space(tmp->next->data[j])) {
                j++;
            } tmp->next->data[j] = '\0';
            value->end = my_getnbr(tmp->next->data);
        } tmp = tmp->next;
    }
}
