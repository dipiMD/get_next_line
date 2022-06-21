/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:18:59 by drakan            #+#    #+#             */
/*   Updated: 2021/10/25 14:12:36 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	new_line_bonus(char **line, char *buf, int *i)
{
	static char	*str_static;
	char		*tmp;

	if (str_static)
	{
		*line = ft_strdup_bonus(str_static);
		free(str_static);
		str_static = NULL;
	}
	else if (!*line)
		*line = ft_strdup_bonus("");
	if (*buf && *i > 0)
	{
		tmp = *line;
		*line = ft_strjoin_bonus(tmp, buf);
		free(tmp);
	}
	tmp = ft_strchr_bonus(*line, '\n');
	if (tmp)
	{
		str_static = ft_strdup_bonus(tmp + 1);
		*(++tmp) = '\0';
		*i = 0;
	}
}

char	*get_next_line(int fd)
{
	char	*line;
	char	*buf;
	int		i;

	i = 1;
	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (buf == NULL || BUFFER_SIZE < 0)
		return (NULL);
	line = NULL;
	if (buf)
	{
		while (i > 0)
		{
			i = read (fd, buf, BUFFER_SIZE);
			buf[i] = 0;
			new_line_bonus (&line, buf, &i);
		}
	}
	if (!*line)
	{
		free (line);
		line = NULL;
	}
	free (buf);
	return (line);
}
