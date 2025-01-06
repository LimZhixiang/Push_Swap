/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <zhilim@student.42.sg>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:37:38 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/23 12:37:42 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("test a:%i", ft_isalpha(97));
	printf("test b:%i", ft_isalpha(65));
	printf("test space:%i", ft_isalpha(' '));
}*/
