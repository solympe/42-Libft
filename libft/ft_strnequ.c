/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strenqu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:25:26 by solympe           #+#    #+#             */
/*   Updated: 2019/09/15 15:02:32 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	saver;

	if (!s1 || !s2)
		return (0);
	i = 0;
	saver = n;
	if (!*s1 && !*s2)
		return (1);
	while (*s1 && *s2 && n)
	{
		if (*s1 == *s2)
		{
			n--;
			i++;
		}
		s1++;
		s2++;
	}
	if ((i == saver) || s1 == s2)
		return (1);
	return (0);
}
