/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:50:33 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/10 17:50:35 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

void	ft_num_free(char **num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		free(num[i]);
		i++;
	}
	free(num);
}

void	ft_free_stack(t_node **stack_a, t_node **stack_b)
{
	t_node	*head;

	if (*stack_a)
	{
		while ((*stack_a)->next)
		{
			head = (*stack_a);
			(*stack_a) = (*stack_a)->next;
			free (head);
		}
		free(*stack_a);
	}
	free(stack_a);
	if (*stack_b)
	{
		while ((*stack_b)->next)
		{
			head = (*stack_b);
			(*stack_b) = (*stack_b)->next;
			free (head);
		}
		free(*stack_b);
	}
	free(stack_b);
}
