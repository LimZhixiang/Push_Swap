/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:00:14 by zhilim            #+#    #+#             */
/*   Updated: 2025/01/06 08:47:31 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_check_result(t_node **a, t_node **b)
{
	int		total;
	int		i;
	t_node	*head;

	head = (*a);
	i = 1;
	total = ft_lstsize_ps(*a) + ft_lstsize_ps(*b);
	while (i <= total)
	{
		if (head->index == i)
		{
			head = head->next;
			i++;
		}
		else
		{
			ft_free_stack(a, b);
			write (1, "KO\n", 3);
			return (0);
		}
	}
	ft_free_stack(a, b);
	write (1, "OK\n", 3);
	return (1);
}

static int	ft_strcmp(char *line, char *instruct)
{
	int	i;

	i = 0;
	while (line[i] != '\0' && instruct[i] != '\0')
	{
		if (line[i] == instruct[i])
			i++;
		else
			return (0);
	}
	return (1);
}

int	execute_commands(char *line, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(line, "sa\n"))
		swap(stack_a);
	else if (ft_strcmp(line, "sb\n"))
		swap(stack_b);
	else if (ft_strcmp(line, "ss\n"))
		ss_checker(stack_a, stack_b);
	else if (ft_strcmp(line, "ra\n"))
		rotate(stack_a);
	else if (ft_strcmp(line, "rb\n"))
		rotate(stack_b);
	else if (ft_strcmp(line, "rr\n"))
		rr_checker(stack_a, stack_b);
	else if (ft_strcmp(line, "rra\n"))
		rev_rotate(stack_a);
	else if (ft_strcmp(line, "rrb\n"))
		rev_rotate(stack_b);
	else if (ft_strcmp(line, "rrr\n"))
		rrr_checker(stack_a, stack_b);
	else if (ft_strcmp(line, "pa\n"))
		push(stack_b, stack_a);
	else if (ft_strcmp(line, "pb\n"))
		push(stack_a, stack_b);
	return (0);
}

static void	ft_checker_check(int argc, char **argv, t_node **a, t_node **b)
{
	if (ft_error_checker(argc, argv, a, b) == 1)
		ft_initstack_a(a, b, argv);
	ft_index_stack(a);
	if (ft_check_repeat(a) == 0)
	{
		ft_free_stack(a, b);
		ft_error();
	}
}
 
int	main(int argc, char **argv)
{
	t_node	**stack_a;
	t_node	**stack_b;
	char	*line;

	stack_a = (t_node **)malloc(sizeof(t_node *));
	stack_b = (t_node **)malloc(sizeof(t_node *));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_checker_check(argc, argv, stack_a, stack_b);
	while (get_next_line(0, &line))
	{
		if (execute_commands(line, stack_a, stack_b))
		{
			ft_error ();
			ft_free_stack (stack_a, stack_b);
		}
		free (line);
	}
	ft_check_result(stack_a, stack_b);
}
