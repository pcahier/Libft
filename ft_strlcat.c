/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:15:53 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/15 16:14:48 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	l;
	unsigned int	j;
	int				s;

	s = 0;
	l = ft_strlen(dst);
	j = 0;
	while (size > (l + j))
	{
		s = 1;
		if (src[j] && (size > (l + j + 1)))
		{
			dst[l + j] = src[j];
			j++;
		}
		else
			break ;
	}
	if (l < size)
		dst[l + j] = '\0';
	if (s == 1)
		return (l + ft_strlen(src));
	return (size + ft_strlen(src));
}
