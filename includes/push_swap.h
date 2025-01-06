/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:13:24 by zhilim            #+#    #+#             */
/*   Updated: 2023/12/20 18:13:28 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft.h"
# include "./get_next_line.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}t_node;

void	push(t_node **stack_from, t_node **stack_to);
int		pb(t_node **stack_a, t_node **stack_b);
int		pa(t_node **stack_b, t_node **stack_a);
int		swap(t_node **stack);
int		sa(t_node **stack_a);
int		sb(t_node **stack_a);
int		ss(t_node **stack_a, t_node **stack_b);
int		ss_checker(t_node **stack_a, t_node **stack_b);
int		ra(t_node **stack_a);
int		rb(t_node **stack_b);
int		rr(t_node **stack_a, t_node **stack_b);
int		rr_checker(t_node **stack_a, t_node **stack_b);
int		rra(t_node **stack_a);
int		rrb(t_node **stack_b);
int		rrr(t_node **stack_a, t_node **stack_b);
int		rrr_checker(t_node **stack_a, t_node **stack_b);
int		rev_rotate(t_node **stack);
int		rotate(t_node **stack);
int		ft_lstsize_ps(t_node *stack);
t_node	*ft_lstnew_ps(int content);
void	ft_lstadd_back_ps(t_node **stack, t_node *new);
int		ft_check_order(t_node **stack_a);
int		ft_check_repeat(t_node **stack_a);
int		ft_error(void);
int		ft_integer_checker(char s, int i, char *num);
int		ft_check_bits(int index, int digit_pos);
int		ft_error_checker(int argc, char **argv, t_node **stack_a,
			t_node **stack_b);
void	ft_sort_stack_100(t_node **stack_a, t_node **stack_b);
void	ft_sort_stack_500(t_node **stack_a, t_node **stack_b, int j);
void	ft_num_free(char **num);
void	ft_initstack_a(t_node **stack_a, t_node **stack_b, char **argv);
void	ft_index_stack(t_node **stack_a);
void	ft_free_stack(t_node **stack_a, t_node **stack_b);
void	ft_simple_sort(t_node **stack_a, t_node **stack_b);
void	ft_check_numbers(int argc, char **argv, t_node **a, t_node **b);

#endif
