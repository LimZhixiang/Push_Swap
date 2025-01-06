/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhilim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:49:36 by zhilim            #+#    #+#             */
/*   Updated: 2024/01/12 20:49:38 by zhilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*ft_strdup_gnl(char *s);
int		ft_strchr_gnl(char *str, char c);
char	*ft_line_extract(char *store);
char	*ft_strjoin_gnl(char *store, char *buf);
char	*ft_update_join(char *temp);
char	*ft_update_store(char *temp);
int		get_next_line(int fd, char **line);

#endif
