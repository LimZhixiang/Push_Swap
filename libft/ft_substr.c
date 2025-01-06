/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:50:47 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/26 11:12:48 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	j;
	char			*ptr;

	j = 0;
	i = ft_strlen(s);
	if (start > i)
		return (ft_calloc(1, 1));
	if ((start + len) >= i)
		len = i - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (j < len)
	{
		ptr[j] = s[j + start];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
