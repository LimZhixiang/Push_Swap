/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:44:37 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/26 10:57:29 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;
	int		j;

	i = ft_strlen(s);
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	j = 0;
	while (s[j])
	{
		ptr[j] = (*f)(j, s[j]);
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
