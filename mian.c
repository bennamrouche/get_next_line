/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mian.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:31:50 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/11 19:01:12 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{


int fd = open("test.txt",O_RDWR | O_CREAT,777);
printf("fd := %d",fd);
if (fd < 0)
	return (0);

char *line;
line = get_next_line(fd) ;
while (line)
{
printf("line:%s\n", (line=get_next_line(fd)));

}
}
