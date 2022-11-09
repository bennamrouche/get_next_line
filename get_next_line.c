/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:02:05 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/09 18:34:21 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	*line = "";
	char		*buff;
	int read_res;


	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = (char *)malloc(BUFFER_SIZE);
	if (!buff)
		return (NULL);
	while (get_newline_pos(line) != -1 || read_res != 0)
	{
		read_res = read(fd, buff,BUFFER_SIZE);
		if (read_res == -1)
			return (NULL);

	}


return (line);
}

void  test(char **l)
{
while (**l)
{
	printf("%c",**l);
	(*l)++;
}

}
int  main()
{
	char *line = "himaddsd";
	strjoin(&line,"123456");
		printf("\npos : %s",line);
}
