/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:25:31 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/25 15:41:29 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;
	int		j;

	j = 0;
	end = ft_strlen(s1) - 1;
	start = 0;
	while ((check_set(s1[start], set)) && s1[start])
		start++;
	while ((check_set(s1[end], set)) && end > start)
		end--;
	ptr = malloc((end - start + 2) * sizeof(char));
	if (!ptr)
		return (ptr);
	while (start <= end)
		ptr[j++] = s1[start++];
	ptr[j] = '\0';
	return (ptr);
}
