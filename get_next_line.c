/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:02:05 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/11 20:37:05 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	*line = "";
	char		*buff;
	int read_res = BUFFER_SIZE + 2;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = (char *)malloc(BUFFER_SIZE);
	if (!buff)
		return (NULL);
	while (1)
	{
		read_res = read(fd, buff,BUFFER_SIZE);
		if (read_res == -1)
			return (free(buff),NULL);
		if( read_res > 0)
			strjoin(&line,buff);
		if (get_newline_pos(line) != -1 || read_res == 0) break;
	}
	if (read_res == 0 && line[0] == '\0')
		return (free(buff), NULL);
	if(get_newline_pos(line) == -1)
		return (free(buff),line);
	return (free(buff), get_line(&line));
}

