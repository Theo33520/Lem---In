/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** print number
*/

#include "my.h"

int my_put_nbr(int nb)
{
    long int nbr = nb;
    if (nbr == 0){
        my_putchar('0');
        return (0);
    }
    if (nbr < 0){
        nbr = nbr * -1;
        my_putchar('-');
    }
    if (nbr > 9){
        my_put_nbr(nbr / my_compute_power_it(10, 1));
    }
    my_putchar('0' + nbr % my_compute_power_it(10, 1));
}
