/*
** EPITECH PROJECT, 2018
** my_init_functions.c
** File description:
** my_init_functions.c
*/

#include "./include/my.h"

t_list  *add_new(t_list *prev, char *nb)
{
    t_list *new = (t_list *)malloc(sizeof(t_list));
    new->prev = prev;
    new->next = NULL;
    new->data = my_getnbr(nb);
    return new;
}

void set_up_list(char **av, t_intel *intel)
{
    t_list *tmp;
    intel->fla = (t_list *)malloc(sizeof(t_list));
    intel->flb = (t_list *)malloc(sizeof(t_list));
    intel->fla->data = my_getnbr(av[1]);
    intel->fla->prev = NULL;
    intel->fla->next = NULL;
    tmp = intel->fla;
    for (int i = 2; av[i]; i++){
        tmp->next = add_new(tmp, av[i]);
        tmp = tmp->next;
    }
    intel->flb->data = -2147483647;
    intel->flb->prev = NULL;
    intel->flb->next = NULL;
    intel->llb = NULL;
    intel->lla = tmp;
}

