/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 09:56:49 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/13 10:00:03 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	if (c == '\t' || c == ' ' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r')
		return (1);
	return (0);
}
