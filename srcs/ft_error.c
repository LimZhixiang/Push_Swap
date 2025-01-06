/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:28:05 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/06 08:32:01 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

int	ft_integer_checker(char s, int i, char *num)
{
	int	length;  
 
	length = ft_strlen(num);
	if (length == 1 && s == '-')
		return (0);
	if (i == 0)
	{
		if ((s >= '0' && s <= '9') || s == ' ' || s == '-')
			return (1);
		if (s == '-')
			return (1);
	}
	else
		if ((s >= '0' && s <= '9') || s == ' ')
			return (1);
	return (0);
}

static void	ft_initstack2_a(t_node **stack_a, t_node **stack_b, char **num)
{
	int		i;
	long	number;
	t_node	*new;

	i = 0;
	while (num[i])
	{
		number = ft_atoi(num[i]);
		if (number < -2147483648 || number > 2147483647)
		{
			ft_free_stack(stack_a, stack_b);
			ft_error();
		}
		else
		{
			new = ft_lstnew_ps(ft_atoi(num[i]));
			ft_lstadd_back_ps(stack_a, new);
			i++;
		}
	}
}

static void	ft_argc2(char **argv, t_node **stack_a, t_node **stack_b)
{
	int		i;
	int		j;
	char	**num;

	i = 0;
	num = ft_split(argv[1], ' ');
	while (num[i])
	{
		j = 0;
		while (num[i][j])
		{
			if (ft_integer_checker(num[i][j], j, num[i]) == 1)
				j++;
			else
			{
				ft_free_stack(stack_a, stack_b);
				ft_error();
			}
		}
		i++;
	}
	ft_initstack2_a(stack_a, stack_b, num);
	ft_num_free(num);
}

static void	ft_argc(char **argv, t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_integer_checker(argv[i][j], j, argv[i]) == 0
				|| argv[i][j] == ' ')
			{
				free(stack_a);
				free(stack_b);
				ft_error();
			}
			j++;
		}
		i++;
	}
}

int	ft_error_checker(int argc, char **argv, t_node **stack_a, t_node **stack_b)
{
	if (argc == 1)
	{
		free(stack_a);
		free(stack_b);
		exit (0);
	}
	if (argc == 2)
	{
		ft_argc2(argv, stack_a, stack_b);
		return (-1);
	}
	else
	{
		ft_argc(argv, stack_a, stack_b);
		return (1);
	}
}
