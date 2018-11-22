/*
** EPITECH PROJECT, 2018
** my_basics_functions.c
** File description:
** my_basics_functions.c
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb >= 10)
    {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else
        my_putchar(48 + nb);
    return (0);
}

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int my_strlen(char const *str)
{
    int nbr;

    while (str[nbr] != '\0')
        nbr++;
    return (nbr);
}

void my_putstr(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar(str[x]);
        x++;
    }
}
