/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:31:50 by zhilim            #+#    #+#             */
/*   Updated: 2023/12/20 17:31:52 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

int	ft_check_order(t_node **stack_a)
{
	int		i;
	t_node	*head;

	head = *stack_a;
	i = 1;
	while (head)
	{
		if (head->index != i)
			return (1);
		else
		{
			head = head->next;
			i++;
		}
	}
	return (0);
}

int	ft_check_repeat(t_node **stack_a)
{
	t_node	*check;
	t_node	*copy;

	copy = *stack_a;
	check = *stack_a;
	while (check)
	{
		copy = check->next;
		while (copy)
		{
			if (check->value == copy->value)
				return (0);
			copy = copy->next;
		}
		check = check->next;
	}
	return (1);
}

void	ft_initstack_a(t_node **stack_a, t_node **stack_b, char **argv)
{
	int		i;
	long	num;
	t_node	*new;

	i = 1;
	while (argv[i])
	{
		num = ft_atoi(argv[i]);
		if (num < -2147483648 || num > 2147483647)
		{
			ft_free_stack(stack_a, stack_b);
			ft_error();
		}
		new = ft_lstnew_ps(num);
		ft_lstadd_back_ps(stack_a, new);
		i++;
	}
}

void	ft_check_numbers(int argc, char **argv, t_node **a, t_node **b)
{
	if (ft_error_checker(argc, argv, a, b) == 1)
		ft_initstack_a(a, b, argv);
	ft_index_stack(a);
	if (ft_check_repeat(a) == 0)
	{
		ft_free_stack(a, b);
		ft_error();
	}
	if (ft_check_order(a) == 0)
	{
		ft_free_stack(a, b);
		exit (0);
	}
}
