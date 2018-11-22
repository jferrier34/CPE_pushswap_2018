/*
** EPITECH PROJECT, 2018
** my_pushswap.c
** File description:
** my_pushswap.c
*/

#include "include/my.h"

int not_sorted(t_intel *nb)
{
    for (t_list *tmp = nb->fla; tmp->next != NULL; tmp = tmp->next)
        if (tmp->data > tmp->next->data)
            return (1);
    return (0);
}

void swap_or_not(t_intel *nb)
{
    if (nb->flb > nb->flb->next) {
        sb(nb);
    }
}

void do_sort(t_intel *nb)
{
    while (not_sorted(nb) || nb->flb->next != NULL) {
        if (nb->lla->data <= nb->fla->data && nb->lla->data >= nb->flb->data
            && nb->fla->next != NULL) {
            rra(nb);
        }
       else if (nb->lla->data > nb->fla->data && nb->lla->data > nb->flb->data
            && (nb->fla->data < nb->flb->data || not_sorted(nb))) {
            pb(nb);
            swap_or_not(nb);
        }
    else {
      pa(nb);
      swap_or_not(nb);
    }
  }
    printf("already sort \n");
}

int main(int ac, char **av)
{
    t_intel *intel = (t_intel *)malloc(sizeof(t_intel));

    if (ac < 3) {
        return (0);
    }
    set_up_list(av, intel);
    if (intel->fla == NULL) {
        return (0);
    }
    do_sort(intel);
    my_putchar('\n');
    return (0);
}
