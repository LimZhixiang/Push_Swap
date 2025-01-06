/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.sg>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:28:26 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/24 22:18:56 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	printf("original function: %li\n", strlen("hello"));
	printf("total length: %i \n", ft_strlen("hello"));
	printf("total length with terminator: %i \n", ft_strlen("\0"));
}*/
