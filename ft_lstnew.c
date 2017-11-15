/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:54:55 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/13 16:59:01 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newl;

	if (!(newl = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content && content_size)
	{
		if (!(newl->content = (void*)malloc(sizeof(void))))
			return (NULL);
		ft_memcpy(newl->content, content, content_size);
		newl->content_size = content_size;
	}
	else
	{
		newl->content = NULL;
		newl->content_size = 0;
	}
	newl->next = NULL;
	return (newl);
}
