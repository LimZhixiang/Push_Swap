/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:25 by zhilim            #+#    #+#             */
/*   Updated: 2023/09/27 18:14:09 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		words;
	int		len;

	words = count_words(s, c);
	ptr = malloc((words + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	words = 0;
	while (*s)
	{
		len = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len > 0)
			ptr[words++] = ft_substr((s - len), 0, len);
	}
	ptr[words] = NULL;
	return (ptr);
}

/*int	main(void)
{
	printf("%s", ft_split("hello its me mario!", ' ');
}*/
