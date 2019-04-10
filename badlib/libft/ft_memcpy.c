/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 11:16:44 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/10 15:16:32 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*p1;
	const char	*p2;

	p1 = dst;
	p2 = src;
	i = 0;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dst);
}
