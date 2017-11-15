/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:09:58 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/13 19:29:02 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*cop;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(cop = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		cop[i] = s[start + i];
		i++;
	}
	cop[i] = '\0';
	return (cop);
}
