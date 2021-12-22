/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:07:03 by fasad             #+#    #+#             */
/*   Updated: 2021/11/22 16:47:26 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_C
#define PUSH_SWAP_C

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct stack{
    int data;
    struct stack *next;
};

int	ft_atoi(const char *str);

#endif