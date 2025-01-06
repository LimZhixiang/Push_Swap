/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:18:52 by zhilim            #+#    #+#             */
/*   Updated: 2023/10/12 17:08:10 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdio.h>

static char	*ft_buftostore(int fd, char *store)
{
	char	*buf;
	int		buf_size;
	char	*temp;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == NULL)
		return (NULL);
	buf_size = 1;
	while (buf_size > 0)
	{
		buf_size = read(fd, buf, BUFFER_SIZE);
		if (buf_size <= 0 && !store)
		{
			free (store);
			break ;
		}
		if (!store && buf_size > 0)
			store = ft_strdup_gnl("");
		buf[buf_size] = '\0';
		temp = store;
		store = ft_strjoin_gnl(temp, buf);
		free(temp);
		if (ft_strchr_gnl(store, '\n'))
			break ;
	}
	free (buf);
	return (store);
}

static char	*ft_extract(char *line)
{
	char	*store;
	int		i;

	i = 0;
	store = ft_update_store(line);
	while (line[i] != '\n' && line[i])
		i++;
	i++;
	line[i] = '\0';
	return (store);
}

int	get_next_line(int fd, char **line)
{
	static char	*store;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 600)
		return (0);
	*line = ft_buftostore(fd, store);
	if (!*line)
		return (0);
	store = ft_extract(*line);
	return (1);
}

/*int	main(void)
{
	int fd = open("test.txt", O_RDONLY);
	char	*line;

	while ((line = get_next_line(fd)) != NULL)
    	{
        	printf("Line: %s", line);
        	free(line);
    	}
}*/
