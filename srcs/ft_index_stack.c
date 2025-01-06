/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:25:44 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/10 14:25:51 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

void	ft_index_stack(t_node **stack_a)
{
	t_node	*head;
	t_node	*min_node;
	int		j;

	j = 1;
	while (j <= ft_lstsize_ps(*stack_a))
	{
		head = *stack_a;
		while (head && head->index != -1)
			head = head->next;
		min_node = head;
		while (head)
		{
			if (min_node->value > head->value && head->index == -1)
				min_node = head;
			head = head->next;
		}
		min_node->index = j;
		j++;
	}
}
