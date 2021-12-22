/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:18:07 by fasad             #+#    #+#             */
/*   Updated: 2021/11/22 18:09:00 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a(int val)
{
	
	
}
int main(int ac, char **av)
{
	int *stack_a;
	int i;
	int j;
	
	i = 1;
	j = 0;
	stack_a = (int *)malloc(sizeof(int) * (ac - 1));
	if (!stack_a)
		return (0);
	while(av[i])
	{
		stack_a[j] = ft_atoi(av[i]);
		i++;
		j++;  
	}
	i = 0;
	while(i < j)
		printf("%d",stack_a[i++]);
}
