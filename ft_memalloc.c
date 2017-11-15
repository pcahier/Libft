/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:59:09 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/09 16:33:21 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = NULL;
	if (!(fresh = (void *)malloc(sizeof(void) * (size))))
		return (NULL);
	ft_memset(fresh, 0, size);
	return (fresh);
}
