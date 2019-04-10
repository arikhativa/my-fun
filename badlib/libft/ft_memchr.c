/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 12:42:07 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/06 13:38:35 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	const char *p;

	p = str;
	i = 0;
	while (i < n)
	{
		if (p[i] == c)
			return ((char*)(p + i));
		i++;
	}
	return (NULL);
}
