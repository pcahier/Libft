/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 00:20:24 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/14 00:25:45 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isxdigit(int c)
{
	if (('a' <= c && c <= 'f') || ('A' <= c && c <= 'F')
			|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}
