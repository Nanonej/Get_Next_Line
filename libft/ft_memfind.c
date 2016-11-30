/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 12:25:45 by aridolfi          #+#    #+#             */
/*   Updated: 2016/11/30 12:27:56 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memfind(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (n-- > 0)
	{
		if ((unsigned char*)s[i] == (unsigned char)c)
			return (i);
		i++;
	}
	return (-1);
}
