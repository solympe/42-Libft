/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:16:03 by solympe           #+#    #+#             */
/*   Updated: 2019/09/09 11:22:17 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*td;
	const unsigned char	*ts;

	td = (unsigned char *)dest;
	ts = (unsigned char *)src;
	while (n-- != 0)
	{
		if (*td == c)
			break ;
		*td = *ts;
		td++;
		ts++;
	}
	return (dest);
}
