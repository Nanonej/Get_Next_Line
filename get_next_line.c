/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:17:55 by aridolfi          #+#    #+#             */
/*   Updated: 2016/12/01 15:29:08 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_linelen(char *save)
{
	int i;

	i = 0;
	while (save[i] != '\n' && save[i])
		i++;
	return (save[i] == '\n' ? i : -1);
}

int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			buff[BUFF_SIZE + 1];
	static char		*save;

	ret = 1;
	if (fd < 0 || line == NULL)
		return (ERROR);
	if (*line)
		free(*line)
	if (save != NULL && ft_strfind(save, '\n') != -1)
	{
		if (ft_linelen(save) != -1)
		{
			//
		}
		ret = read(fd, buff, BUFF_SIZE);
		buff[ret] = '\0';
	}
	return (1);
}
