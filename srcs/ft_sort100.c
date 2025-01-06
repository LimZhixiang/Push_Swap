/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:20:21 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/10 17:20:22 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

static int	ft_check_pos(t_node **stack_b, int index)
{
	t_node	*head;
	int		pos;
	int		stack_size;
	int		half;

	stack_size = ft_lstsize_ps(*stack_b);
	half = stack_size / 2;
	head = (*stack_b);
	pos = 1;
	while (pos <= stack_size)
	{
		if (head->index == index)
		{
			if (pos <= half)
				return (0);
			else
				return (1);
		}
		else
			head = head->next;
		pos++;
	}
	return (0);
}

static void	ft_init_100(t_node **stack_a, t_node **stack_b)
{
	int	i;

	i = 20;
	while (*stack_a)
	{
		while (ft_lstsize_ps(*stack_b) < i)
		{
			if ((*stack_a)->index >= i - 19 && (*stack_a)->index <= i)
			{
				pb(stack_a, stack_b);
				if ((*stack_b)->index <= i - 10)
					rb(stack_b);
			}
			else
				ra(stack_a);
		}
		i += 20;
	}
}

void	ft_sort_stack_100(t_node **stack_a, t_node **stack_b)
{
	int	index;

	ft_init_100(stack_a, stack_b);
	index = 100;
	while (*stack_b)
	{
		if (ft_check_pos(stack_b, index) == 0)
		{
			while ((*stack_b)->index != index)
				rb(stack_b);
			pa(stack_b, stack_a);
			index--;
		}
		if (ft_check_pos(stack_b, index) == 1)
		{
			rrb(stack_b);
			while ((*stack_b)->index != index)
				rrb(stack_b);
			pa(stack_b, stack_a);
			index--;
		}
	}
}
