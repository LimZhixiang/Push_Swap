/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:26:07 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/10 14:26:09 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

int	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(-1);
}

int	ft_lstsize_ps(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

t_node	*ft_lstnew_ps(int content)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back_ps(t_node **stack, t_node *new)
{
	if (stack)
	{
		if (!*stack)
			*stack = new;
		else
		{
			while ((*stack)->next != NULL)
				stack = &(*stack)->next;
			(*stack)->next = new;
		}
	}
}

int	ft_check_bits(int index, int digit_pos)
{
	int	base2_digit;

	base2_digit = (index >> digit_pos) & 1;
	return (base2_digit);
}
