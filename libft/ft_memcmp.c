/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 05:09:12 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/25 05:16:25 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_uc;
	unsigned char	*s2_uc;
	size_t			i;

	i = 0;
	s1_uc = (unsigned char *)s1;
	s2_uc = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_uc[i] == s2_uc[i])
			i++;
		else
			return ((int)(s1_uc[i] - s2_uc[i]));
	}
	return (0);
}
