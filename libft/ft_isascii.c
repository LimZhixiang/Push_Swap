/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.sg>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:38:15 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/23 12:38:19 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("test with null: %i\n", ft_isascii('\0'));
	printf("test with z: %i\n", ft_isascii('z'));
	printf("test with 127: %i\n", ft_isascii(128));
}*/
