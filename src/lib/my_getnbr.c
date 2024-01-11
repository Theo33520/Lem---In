/*
** EPITECH PROJECT, 2022
** getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int nbr_m = 0;
    int i;
    long int a = 2147483647;
    for (i = 0; str[i] < '0' || str[i] > '9'; i++) {
        if (str[i] == '-') {
            nbr_m++;
        }
    }
    int j = i;
    int number = 0;
    for (j = i; str[j] >= '0' && str[j] <= '9';j++) {
        number = number * 10;
        number = number + str[j] - '0';
    }
    if (nbr_m % 2 != 0) {
        number = number * (-1);
    }
    if (number > a || number == a || number *(-1) == a) {
        return 0;
    } return number;
}
