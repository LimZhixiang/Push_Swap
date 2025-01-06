/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_instruct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:39:55 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/10 14:40:17 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

void	push(t_node **stack_from, t_node **stack_to)
{
	t_node	*from_node;

	from_node = *stack_from;
	*stack_from = from_node->next;
	from_node->next = *stack_to;
	*stack_to = from_node;
}

int	pb(t_node **stack_a, t_node **stack_b)
{
	if (!(*stack_a))
		return (-1);
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
	return (0);
}

int	pa(t_node **stack_b, t_node **stack_a)
{
	if (!(*stack_b))
		return (-1);
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
	return (0);
}
