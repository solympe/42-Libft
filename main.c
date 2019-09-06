/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:55:10 by solympe           #+#    #+#             */
/*   Updated: 2019/09/06 18:25:50 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>


int main()
{
	size_t		i = 5;
	int 		n = 1;
	void		*arr = "abcdef";

	printf("%s\n", "Test ft_memset");
	ft_memset(arr, n, i);
	printf("%s\n", arr);

	printf("%s\n", "Test ft_strlen");
	printf("%zu\n", ft_strlen(arr));

	printf("%s\n", "Test ft_strdup");
	printf("%s\n", ft_strdup(arr));

	printf("%s\n", "Test ft_strdup");
	printf("%s\n", ft_strdup(arr));

}