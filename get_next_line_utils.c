/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:17:14 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/11 16:35:06 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_newline_pos(char *str)
{
	int	count;

	count = 0;
if (!str)
	return (-1);
	while (str[count])
	{
		if (str[count] == '\n')
			return (count);
		count++;
	}
	return (-1);
}

void strjoin(char **line, char *buff)
{
	int len;
	char *temp;

	temp = *line;
	len = (ft_strlen(temp) + ft_strlen(buff));
		 *line = malloc(len +1);
	while (*temp)
		*((*line)++) = *(temp++);
	while (*buff)
		*((*line)++) = *(buff++);

	**line = '\0';
	*line = *line -  len;
	if(!temp)
	free(temp);
}

size_t ft_strlen( char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
char	*get_line(char **src)
{
	int j;
	int i;
	char *p;
	char *temp;
	temp = *src;
	i = 0;
	j = get_newline_pos(*src);

	if (j < 0)
		return (*src);
	p = malloc(j + 2);

	if (!p)
		return (free(*src),free(temp),NULL);

while (i < j + 1)
{
	p[i] = temp[i];
	i++;
}
p[i] = '\0';

*src = malloc(ft_strlen(temp + j + 1) + 1);
if(!*src)
return (free(temp),free(p),NULL);
i = 0;
while (temp[j + i + 1])
{
(*src)[i] = temp[j + i + 1];
i++;
}
(*src)[i] = '\0';
return (free(temp),p);

return NULL;
}

