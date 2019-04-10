/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:27:54 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/06 13:48:16 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strlcat(char *dst, const char *src, size_t i)
{
	size_t n;
	size_t a;

	n = 0;
	a = 0;
	while (dst[n] && n < i)
		n++;
	while (src[a] && (n + a + 1) < i)
	{
		dst[n + a] = src[a];
		a++;
	}
	dst[n + a] = '\0';
	return (n + ft_strlen(src));
}
