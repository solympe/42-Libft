/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:55:10 by solympe           #+#    #+#             */
/*   Updated: 2019/09/09 15:20:27 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main()
{
	char *test = "2147483648";
//	char *test = malloc(256);
	printf("%s\n", test);

	printf("%d\n", ft_atoi(test));
	return (0);
}