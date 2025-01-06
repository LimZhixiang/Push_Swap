/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:22:52 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/25 18:15:32 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long c)
{
	int	len;

	len = 0;
	if (c == 0)
		return (1);
	if (c < 0)
	{
		len++;
		c = -c;
	}
	while (c > 0)
	{
		len++;
		c = c / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*ptr;

	num = n;
	len = ft_len(n);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (ptr);
	if (num == 0)
		ptr[0] = 0 + '0';
	if (num < 0)
	{
		ptr[0] = '-';
		num = num * -1;
	}
	ptr[len--] = '\0';
	while (num > 0 && len >= 0)
	{
		ptr[len--] = (num % 10) + '0';
		num = num / 10;
	}
	return (ptr);
}
