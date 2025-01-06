/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.sg>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:39:06 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/23 12:39:10 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("test ascii 31: %i\n", ft_isprint(31));
	printf("test ascii a: %i\n", ft_isprint('a'));
	printf("test ascii 127: %i\n", ft_isprint(127));
}*/
