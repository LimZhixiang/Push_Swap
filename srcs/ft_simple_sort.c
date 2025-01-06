/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:10:03 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/10 23:10:08 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

static void	sort_3(t_node **stack, int i)
{
	if ((*stack)->index == i)
		ra(stack);
	else if ((*stack)->next->index == i)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}

static void	sort_4(t_node **stack_a, t_node **stack_b)
{
	int	current;

	current = 1;
	while (current <= 4)
	{
		if ((*stack_a)->index == 1 || (*stack_a)->index == 2)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		current++;
	}
	if ((*stack_a)->index > (*stack_a)->next->index)
		ra(stack_a);
	if ((*stack_b)->index < (*stack_b)->next->index)
		rb(stack_b);
	current = 0;
	while (++current <= 2)
		pa(stack_a, stack_b);
}

static void	sort_5(t_node **stack_a, t_node **stack_b)
{
	int	current;

	current = 1;
	while (current <= 5)
	{
		if ((*stack_a)->index == 1 || (*stack_a)->index == 2)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		current++;
	}
	if ((*stack_b)->index < (*stack_b)->next->index)
		sb(stack_b);
	sort_3(stack_a, 5);
	current = 1;
	while (current <= 2)
	{
		pa(stack_b, stack_a);
		current++;
	}
}

void	ft_simple_sort(t_node **stack_a, t_node **stack_b)
{
	if (ft_lstsize_ps(*stack_a) == 2)
		sa(stack_a);
	if (ft_lstsize_ps(*stack_a) == 3)
		sort_3(stack_a, 3);
	if (ft_lstsize_ps(*stack_a) == 4)
		sort_4(stack_a, stack_b);
	if (ft_lstsize_ps(*stack_a) == 5)
		sort_5(stack_a, stack_b);
}
