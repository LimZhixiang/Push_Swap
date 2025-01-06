/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_instruct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:45:36 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/10 14:45:39 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

int	rotate(t_node **stack)
{
	t_node	*head;

	head = *stack;
	*stack = head->next;
	while ((*stack)->next != NULL)
		stack = &(*stack)->next;
	(*stack)->next = head;
	head->next = NULL;
	return (1);
}

int	ra(t_node **stack_a)
{
	if (ft_lstsize_ps(*stack_a) < 2)
		return (-1);
	rotate(stack_a);
	write(1, "ra\n", 3);
	return (0);
}

int	rb(t_node **stack_b)
{
	if (ft_lstsize_ps(*stack_b) < 2)
		return (-1);
	rotate(stack_b);
	write(1, "rb\n", 3);
	return (0);
}

int	rr_checker(t_node **stack_a, t_node **stack_b)
{
	if (ft_lstsize_ps(*stack_a) < 2 || ft_lstsize_ps(*stack_b) < 2)
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	return (0);
}

int	rr(t_node **stack_a, t_node **stack_b)
{
	if (ft_lstsize_ps(*stack_a) < 2 || ft_lstsize_ps(*stack_b) < 2)
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
	return (0);
}
