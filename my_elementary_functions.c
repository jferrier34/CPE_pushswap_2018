/*
** EPITECH PROJECT, 2018
** my_elementary_functions.c
** File description:
** my_elementary_functions.c
*/

#include "./include/my.h"

void pa(t_intel *nb)
{
    if (!(nb->fla))
        return ;
    t_list *tmp = nb->flb;
    nb->flb = nb->flb->next;
    nb->flb->prev = NULL;
    tmp->next = nb->fla;
    nb->fla->prev = tmp;
    nb->fla = tmp;
    my_putstr("pa ");
}

void pb(t_intel *nb)
{
    if (!(nb->flb))
        return ;
    t_list *tmp = nb->fla;
    nb->fla = nb->fla->next;
    nb->fla->prev = NULL;
    tmp->next = nb->flb;
    nb->flb->prev = tmp;
    nb->flb = tmp;
    my_putstr("pb ");
}

void rra(t_intel *nb)
{
    if (!(nb->lla) && nb->lla != nb->fla)
        return ;
    t_list *tmp = nb->lla;
    nb->lla->prev->next = NULL;
    nb->lla = nb->lla->prev;
    tmp->prev = NULL;
    tmp->next = nb->fla;
    nb->fla->prev = tmp;
    nb->fla = nb->fla->prev;
    my_putstr("rra ");
}

void sb(t_intel *nb)
{
    if (nb->flb == NULL || nb->flb->next == NULL)
        return;
    int save = nb->flb->data;
    nb->flb->data = nb->flb->next->data;
    nb->flb->next->data = save;
    my_putstr("sb ");
}

void sa(t_intel *nb)
{
    if (nb->fla == NULL || nb->fla->next == NULL)
        return;
    int save = nb->fla->data;
    nb->fla->data = nb->fla->next->data;
    nb->fla->next->data = save;
    my_putstr("sa ");
}
