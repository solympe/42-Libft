/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:55:10 by solympe           #+#    #+#             */
/*   Updated: 2019/09/06 18:42:25 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int main()
{
	void		*arr = "abcdef";

	printf("%s\n\n", "Start testing: abcdef");

	printf("%s\n", "Test ft_strlen");
	printf("%zu\n\n", ft_strlen(arr));

	printf("%s\n", "Test ft_strdup");
	printf("%s\n\n", ft_strdup(arr));

	printf("%s\n", "Test ft_strdup");
	printf("%s\n\n", ft_strdup(arr));

}