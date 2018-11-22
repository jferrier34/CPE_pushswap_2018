/*
** EPITECH PROJECT, 2018
** my_basics_functions2.c
** File description:
** my_basics_functions2.c
*/

#include <unistd.h>

int my_getnbr(char const *str)
{
    int nb = 0;
    int isneg = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            isneg = isneg * -1;
        i = i + 1;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i = i + 1;
        }
        else
            return (nb * isneg);
    }
    return (nb * isneg);

}
