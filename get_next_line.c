/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:17:55 by aridolfi          #+#    #+#             */
/*   Updated: 2016/11/30 12:28:08 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_linelen(char *save)
{
	int i;

	while (save[i] != '\n')
}

int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			buff[BUFF_SIZE + 1];
	static char		*save;

	ret = 1;
	if (fd < 0)
		return (ERROR);
	if (*line)
		free(*line)
	if (save != NULL && ft_strfind(save, '\n') != -1)
	{
		ft_linelen(save);
		ret = read(fd, buff, BUFF_SIZE);
		buff[ret] = '\0';
	}
	return (1);
}
