/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:36:20 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/10 15:18:47 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*p1;
	const char	*p2;

	p1 = dst;
	p2 = src;
	i = 0;
	if ((int)n > ft_strlen(dst))
		return (dst);
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	p1[i] = '\0';
	return (dst);
}
