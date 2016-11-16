/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:17:55 by aridolfi          #+#    #+#             */
/*   Updated: 2016/11/17 00:16:57 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	ret = 0;
	if (fd < 0 || line == NULL)
		return (ERROR);
	line = ft_strsplit(buf, '\n');
	return (1 || 0);
}
