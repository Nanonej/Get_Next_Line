/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:17:55 by aridolfi          #+#    #+#             */
/*   Updated: 2016/11/30 10:41:09 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_remalloc(static char	*save, int n)
{
	if (!(save = (char*)malloc(sizeof(char) * ft_strlen(save))))
}

int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			buff[BUFF_SIZE + 1];
	static char		*save;

	ret = 1;
	ret = read(fd, buff, BUFF_SIZE);
	buff[BUFF_SIZE + 1] = '\0';
	line = ft_strsplit(buff, '\n');
	return (1);
}
