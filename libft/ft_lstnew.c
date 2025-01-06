/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:40:33 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/26 12:07:07 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node1;

	node1 = (t_list *)malloc(sizeof(t_list));
	if (!node1)
		return (node1);
	node1->content = content;
	node1->next = NULL;
	return (node1);
}
