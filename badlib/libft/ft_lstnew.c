/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:26:02 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/10 12:18:13 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *c, size_t s)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (c != NULL)
	{
		new->content = (void*)ft_memalloc(sizeof(void) * (s + 1));
		if (new->content == NULL)
			return (NULL);
		ft_memcpy(new->content, c, s + 1);
		new->content_size = s;
	}
	else
	{
		new->content = NULL;
		new->content_size = 0;
	}
	new->next = NULL;
	return (new);
}
