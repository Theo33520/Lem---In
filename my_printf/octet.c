/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** task01
*/

#include "my.h"

int my_compute_power_it(int nb,int p)
{
    if (p == 0) {
        return (1);
    }
    if ( p < 0 ){
        return (0);

    }
    int a = 1;
    int r = nb;
    while ( a != p) {
        r = r * nb;
        a++;
    }
    return (r);
}

void my_put_octec(int nb)
{
    int count = 0;
    int i = 0;
    while (nb > 0) {
        count = count +  (nb % 8) * my_compute_power_it(10,i);
        nb = nb / 8;
        i = i + 1;
    }
    my_put_nbr(count);
}
