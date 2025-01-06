/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.sg>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:34:12 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/25 04:48:19 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dlen < size && size > 0)
	{
		while ((dlen + i) < size - 1 && src[i])
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[dlen + i] = '\0';
	}
	if (dlen >= size)
		dlen = size;
	return (dlen + slen);
}
