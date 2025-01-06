/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instruct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:45:55 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/06 08:34:40 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

int	swap(t_node **stack)
{
	int	head_value;
	int	head_index;

	if (!*stack || !(*stack)->next)
		return (-1);
	head_value = (*stack)->value;
	head_index = (*stack)->index; 
	(*stack)->value = (*stack)->next->value;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->value = head_value;
	(*stack)->next->index = head_index;
	return (0);
}

int	sa(t_node **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	write(1, "sa\n", 3);
	return (0);
}

int	sb(t_node **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	write(1, "sb\n", 3);
	return (0);
}

int	ss_checker(t_node **stack_a, t_node **stack_b)
{
	if (ft_lstsize_ps(*stack_a) < 2 || ft_lstsize_ps(*stack_b) < 2)
		return (-1);
	sa(stack_a);
	sb(stack_b);
	return (0);
}

int	ss(t_node **stack_a, t_node **stack_b)
{
	if (ft_lstsize_ps(*stack_a) < 2 || ft_lstsize_ps(*stack_b) < 2)
		return (-1);
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
	return (0);
}
