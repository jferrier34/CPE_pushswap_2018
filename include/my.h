/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>

typedef struct s_list
{
    long int data;
    struct s_list *next;
    struct s_list *prev;
} t_list;

typedef struct s_intel
{
    t_list *fla;
    t_list *lla;
    t_list *flb;
    t_list *llb;
    int la[2];
    int lb[2];
} t_intel;

void my_putchar(char c);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_strlen(char const *str);
void my_putstr(char *str);
int my_getnbr(char const *str);
void pa(t_intel *nb);
void pb(t_intel *nb);
void rra(t_intel *nb);
void sb(t_intel *nb);
int get_numbers(t_intel *nb, int *la, int *lb);
t_list *add_new(t_list *prev, char *nb);
void set_up_list(char **av, t_intel *intel);
int not_sorted(t_intel *nb);
void swap_or_not(t_intel *nb);
void do_sort(t_intel *nb);
int main(int ac, char **av);

#endif
