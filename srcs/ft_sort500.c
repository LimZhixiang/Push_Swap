/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort500.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:31:34 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/06 08:47:41 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

static void	ft_500(t_node **stack_a, t_node **stack_b, int s, int j)
{
	int	current_size;

	current_size = 1;
	while (current_size <= s)
	{
		if (ft_check_bits((*stack_b)->index, j) == 0)
			rb(stack_b);
		else
			pa(stack_b, stack_a);
		current_size++;
	} 
}

static void	ft_500_algo(t_node **stack_a, t_node **stack_b, int j)
{
	int	stacka_size;
	int	stackb_size;
	int	current_size;
	int	rotate_b;

	rotate_b = 0;
	current_size = 0;
	stacka_size = ft_lstsize_ps(*stack_a);
	stackb_size = ft_lstsize_ps(*stack_b);
	while (++current_size <= stacka_size)
	{
		if (ft_check_bits((*stack_a)->index, j) == 0)
		{
			pb(stack_a, stack_b);
			rotate_b++;
		}
		else
			ra(stack_a);
	}
	current_size = 0;
	while (++current_size <= rotate_b)
		rb(stack_b);
	ft_500(stack_a, stack_b, stackb_size, j);
}

static void	ft_init1_500(t_node **stack_a, t_node **stack_b, int j)
{
	int	current_size;
	int	total_size;

	total_size = ft_lstsize_ps(*stack_a);
	current_size = 1;
	while (current_size <= total_size)
	{
		if (ft_check_bits((*stack_a)->index, j) == 0
			&& ft_check_bits((*stack_a)->index, j + 1) == 1)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		current_size++;
	}
}

static void	ft_init_500(t_node **stack_a, t_node **stack_b, int current_size)
{
	while (current_size <= 500)
	{
		if (ft_check_bits((*stack_a)->index, 0) == 1
			&& ft_check_bits((*stack_a)->index, 1) == 0)
			pb(stack_a, stack_b);
		else if (ft_check_bits((*stack_a)->index, 0) == 0
			&& ft_check_bits((*stack_a)->index, 1) == 0)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		else
			ra(stack_a);
		current_size++;
	}
	ft_init1_500(stack_a, stack_b, 0);
}

void	ft_sort_stack_500(t_node **stack_a, t_node **stack_b, int j)
{
	int	current_size;
	int	i;

	current_size = 1;
	ft_init_500(stack_a, stack_b, current_size);
	i = 2;
	while (i < j)
	{
		ft_500_algo(stack_a, stack_b, i);
		i++;
	}
	while (*stack_b)
		pa(stack_b, stack_a);
}
