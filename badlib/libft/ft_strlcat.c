/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:27:54 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/10 16:04:52 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, const char *src, size_t i)
{
	size_t n;
	size_t a;
	size_t b;

	b = 0;
	n = 0;
	a = 0;
	while (dst[n])
		n++;
	while (src[b])
		b++;
	if (n <= i)
		b = b + i;
	else
		b = b + n;
	while (src[a] && (n + 1) < i)
	{
		dst[n] = src[a];
		a++;
		n++;
	}
	dst[n + a] = '\0';
	return (b);
}
