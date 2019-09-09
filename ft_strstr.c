/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:45:54 by solympe           #+#    #+#             */
/*   Updated: 2019/09/08 15:50:13 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		yes2(const char *haystack, const char *needle, int i, int j)
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

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		saver;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			saver = i;
			if (yes2(haystack, needle, i, j))
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
