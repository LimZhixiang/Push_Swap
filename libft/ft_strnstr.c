/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 05:18:33 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/25 05:53:29 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*s;
	char	*sub;
	size_t	i;
	size_t	j;

	i = 0;
	s = (char *)big;
	sub = (char *)little;
	if (!little[0])
		return (s);
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] == sub[j] && (i + j) < len)
		{
			j++;
			if (sub[j] == '\0')
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
