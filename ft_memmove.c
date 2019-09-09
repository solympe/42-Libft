/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:25:19 by solympe           #+#    #+#             */
/*   Updated: 2019/09/09 15:58:05 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t 				i;
	unsigned char		*td;
	const unsigned char	*ts;

	i = 0;
	td = (unsigned char *)dest;
	ts = (unsigned char *)src;
	if (ts < td)
	{
		while (++i != n)
			td[n - i] = ts[n - i];
	}
	while (n-- != 0)
	{
		*td = *ts;
		td++;
		ts++;
	}
	return (dest);
}
