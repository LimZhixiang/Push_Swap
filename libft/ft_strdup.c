/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 06:38:33 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/25 06:53:37 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (ptr);
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (ptr - i);
}
