/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:27:03 by solympe           #+#    #+#             */
/*   Updated: 2019/09/08 13:27:32 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && n != 0)
	{
		if (!src[i])
			dest[i] = 0;
		else
			dest[i] = src[i];
		n--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
