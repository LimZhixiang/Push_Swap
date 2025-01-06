/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_instruct.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:41:18 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/10 14:41:20 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

int	rev_rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;

	if (ft_lstsize_ps(*stack) < 2)
		return (-1);
	head = *stack;
	tail = *stack;
	while (tail->next != NULL)
		tail = tail->next;
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	rra(t_node **stack_a)
{
	if (ft_lstsize_ps(*stack_a) < 2)
		return (-1);
	rev_rotate(stack_a);
	write(1, "rra\n", 4);
	return (0);
}

int	rrb(t_node **stack_b)
{
	if (ft_lstsize_ps(*stack_b) < 2)
		return (-1);
	rev_rotate(stack_b);
	write(1, "rrb\n", 4);
	return (0);
}

int	rrr_checker(t_node **stack_a, t_node **stack_b)
{
	if (ft_lstsize_ps(*stack_a) < 2 || ft_lstsize_ps(*stack_a) < 2)
		return (-1);
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	write(1, "rrr\n", 4);
	return (0);
}

int	rrr(t_node **stack_a, t_node **stack_b)
{
	if (ft_lstsize_ps(*stack_a) < 2 || ft_lstsize_ps(*stack_a) < 2)
		return (-1);
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	write(1, "rrr\n", 4);
	return (0);
}
