/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:17:14 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/09 19:47:27 by ebennamr         ###   ########.fr       */
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
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t j;
	char *p;

	if (!s)
		return (NULL);
	if (len <= ft_strlen(s + start))
		p = (char *)(malloc(len + 1));
	else
		p = (char *)(malloc(ft_strlen(s + start) + 1));
	j = 0;
	if (!p || !s)
	{
		return (0);
	}
	while (s[start] && j < len && start < ft_strlen(s))
	{
		p[j] = s[start];
		j++;
		start++;
	}
	p[j] = '\0';
	return (p);
}
