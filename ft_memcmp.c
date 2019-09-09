/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:11:11 by solympe           #+#    #+#             */
/*   Updated: 2019/09/09 16:28:06 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		res;

	res = 0;
	while (n--)
	{
		if (*(unsigned const char *)s1 != *(unsigned const char *)s2)
			return((unsigned const char *)s1 - (unsigned const char *)s2);
		s1--;
		s2--;
	}
	return (0);
}
