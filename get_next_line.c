/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:17:55 by aridolfi          #+#    #+#             */
/*   Updated: 2016/11/30 10:57:25 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			buff[BUFF_SIZE + 1];
	static char		*save;

	ret = 1;
	if (!(save = (char*)malloc(sizeof(char) * (ft_strlen(save) + BUFF_SIZE))))
		return (ERROR);
	ret = read(fd, buff, BUFF_SIZE);
	buff[BUFF_SIZE + 1] = '\0';
	line = ft_strsplit(buff, '\n');
	return (1);
}
