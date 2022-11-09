/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:07:06 by ebennamr          #+#    #+#             */
/*   Updated: 2022/11/09 18:02:54 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> //##
# define BUFFER_SIZE 42 //##

void	strjoin(char **line, char *buff);
char	*get_next_line(int fd);
int		get_newline_pos(char *str);
size_t ft_strlen(char *str);
#endif
