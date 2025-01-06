/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:47:35 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/27 17:12:48 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			while ((*lst)->next != NULL)
				lst = &(*lst)->next;
			(*lst)->next = new;
		}
	}
}
