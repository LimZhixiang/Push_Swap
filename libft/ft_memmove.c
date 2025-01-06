/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.sg>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:37:30 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/23 22:08:13 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			*(unsigned char *)(dest + (n - 1)) = *(const char *)(src + (n - 1));
			n--;
		}
	}
	else if (dest < src)
	{
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(const char *)(src + i);
			i++;
		}
	}
	return (dest);
}
