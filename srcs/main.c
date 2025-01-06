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

int	main(int argc, char **argv)
{
	t_node	**stack_a;
	t_node	**stack_b;

	stack_a = (t_node **)malloc(sizeof(t_node *));
	stack_b = (t_node **)malloc(sizeof(t_node *));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_check_numbers(argc, argv, stack_a, stack_b);
	if (ft_lstsize_ps(*stack_a) <= 5)
		ft_simple_sort(stack_a, stack_b);
	else if (ft_lstsize_ps(*stack_a) == 100)
		ft_sort_stack_100(stack_a, stack_b);
	else if (ft_lstsize_ps(*stack_a) < 100)
		ft_sort_stack_500(stack_a, stack_b, 7);
	else if (ft_lstsize_ps(*stack_a) <= 500)
		ft_sort_stack_500(stack_a, stack_b, 9);
	ft_free_stack(stack_a, stack_b);
}
