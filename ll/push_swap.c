/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:06:56 by fasad             #+#    #+#             */
/*   Updated: 2021/11/22 17:54:43 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(struct stack *a)
{
    struct stack *a1;
    int i;

    a1 = (struct stack *)malloc(sizeof(struct stack)); 
    i = a->data;
    a1 = a->next;
    a->data = a1->data;
    a1->data = i;
}

struct stack *push_a(int val)
{
    struct stack *node;

    node = (struct stack *)malloc(sizeof(struct stack)); 
    node->data = (int)(val);
    node->next = NULL;
    
    return node;
}

void print_stack(struct stack *a)
{
    while(a != NULL)
    {
        printf("%d",a->data);
        a = a -> next;
    }
}

int main(int ac, char **av)
{
    struct stack *a;
    struct stack b;
    int i;

    i = 0;
    //check_input(**av);
    while(av[i])
    {
        a = push_a((int)av[i] - 48);
        i++;
    }
    print_stack(a);
} 
