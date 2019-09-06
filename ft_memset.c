/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:05:50 by solympe           #+#    #+#             */
/*   Updated: 2019/09/06 17:47:11 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
	char 	*arr;
	size_t 	i;

	i = 0;
	arr = (char *)malloc(sizeof(char) * n + 1);
	if (s == NULL)
		return (0);
	while (i < n)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}