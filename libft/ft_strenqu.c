/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strenqu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:25:26 by solympe           #+#    #+#             */
/*   Updated: 2019/09/12 12:39:50 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	if (!*s1 && !*s2)
		return (1);
	while (*s1 && *s2)
	{
		if (*s1 == *s2 && n--)
			i++;
		s1++;
		s2++;
	}
	if ((*s1 == '\0' && *s2 == '\0') && (i == j))
		return (1);
	return (0);
}
