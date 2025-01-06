/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:53:06 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/25 12:20:46 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (*s1)
		ptr[j++] = *(s1++);
	while (*s2)
		ptr[j++] = *(s2++);
	ptr[j] = '\0';
	return (ptr);
}
