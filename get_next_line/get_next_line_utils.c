/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:48:17 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/12 20:48:18 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup_gnl(char *s)
{
	char	*dup;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strchr_gnl(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}

/*char	*ft_line_extract(char *store)
{
	int		i;
	char	*line;
	int		c;

	c = 0;
	i = 0;
	while (store[i] != '\n' && store[i])
		i++;
	if (store[i] == '\0')
		return (NULL);
	line = malloc(sizeof(char) * (i + 2));
	if (line == NULL)
		return (NULL);
	while (c <= i)
	{
		line[c] = store[c];
		c++;
	}
	line[c] = '\0';
	return (line);
}*/

char	*ft_strjoin_gnl(char *store, char *buf)
{
	int		store_size;
	int		buf_size;
	char	*join;
	int		i;

	store_size = 0;
	buf_size = 0;
	while (store[store_size])
		store_size++;
	while (buf[buf_size])
		buf_size++;
	join = malloc(sizeof(char) * (store_size + buf_size + 2));
	if (join == NULL)
		return (NULL);
	i = 0;
	store_size = 0;
	while (store[store_size])
		join[i++] = store[store_size++];
	buf_size = 0;
	while (buf[buf_size])
		join[i++] = buf[buf_size++];
	join[i] = '\0';
	return (join);
}

char	*ft_update_store(char *temp)
{
	char	*update;
	int		j;
	int		i;

	i = 0;
	while (temp[i] != '\n' && temp[i])
		i++;
	j = 0;
	while (temp[j])
		j++;
	update = malloc(sizeof(char) * (j - i + 1));
	if (update == NULL)
		return (NULL);
	j = 0;
	if (temp[i] != '\0')
	{
		while (temp[++i])
			update[j++] = temp[i];
	}
	update[j] = '\0';
	if (j == 0)
	{
		free (update);
		return (NULL);
	}
	return (update);
}
