/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 09:06:07 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/06 10:24:04 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int n;

	n = 0;
	while (s1[n])
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	return (s1[n] - s2[n]);
}
