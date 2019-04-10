/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 09:44:37 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/07 09:53:02 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#define SPACE s[n] == ' ' || s[n] == '\n' || s[n] == '\t'

char	*ft_strtrim(const char *s)
{
	char *new;
	unsigned int n;
	size_t len;

	n = 0;
	n = ft_strlen(s);
	while (SPACE)
		n--;
	len = n;
	n = 0;
	while (SPACE)
		n++;
	new = ft_strsub(s, n, len);
	return (new);


}
