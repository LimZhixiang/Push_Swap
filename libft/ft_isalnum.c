/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.sg>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:34:55 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/23 12:34:59 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("test digit 0: %i\n", ft_isalnum('0'));
	printf("test alpha a: %i\n", ft_isalnum('a'));
	printf("test digit A: %i\n", ft_isalnum('A'));
	printf("test digit space: %i\n", ft_isalnum(' '));
}*/
