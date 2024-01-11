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

int parsing(t_list **list,t_beigin_from_to **list_tuple,t_ant *ant)
{
    t_list *current = *list;
    int last = check_last_newline(*list);
    int number = number_word(current->data);
    if (number != 1 || carac_alpha(current->data[0]) == 0) return 84;
    else {
        my_printf("#number_of_ants\n");
        my_printf("%i\n", my_getnbr(current->data));
    } my_printf("#rooms\n");
    load_rooms(list);
    my_printf("##start\n"); load_start(list);
    load_end(list); my_printf("#tunnels\n");
    load_tunnel(list,list_tuple);
    if (last == 1) my_printf("#moves\n");
    if (last == 0) my_printf("\n#moves\n");
    int count = save_nb(*list, &ant);
    if (count == 2) {
        load_moves_romms_empty(ant, *list,count); return 0;
    } if (count == 3) {
        load_move_rooms_one(ant, *list,count);return 0;
    } return 0;
}
