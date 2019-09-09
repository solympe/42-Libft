/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:52:43 by solympe           #+#    #+#             */
/*   Updated: 2019/09/09 13:16:45 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		yes1(const char *haystack, const char *needle, int i, int j)
{
	if (haystack[i] == needle[j])
	{
		while ((haystack[i] && needle[j]) && (haystack[i] == needle[j]))
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			j;
	int			saver;

	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			saver = i;
			if (yes1(haystack, needle, i, j))
			{
				i = saver;
				return ((char *)&haystack[i]);
			}
			else
			{
				i = saver + 1;
				j = 0;
			}
		}
		i++;
	}
	return (0);
}
