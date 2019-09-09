/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:21:26 by solympe           #+#    #+#             */
/*   Updated: 2019/09/09 15:25:18 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		return_atoi(const char *nptr, int i, int checker)
{
	int		res;
	int		pow;
	int		a;

	pow = 1;
	a = 0;
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		i++;
	i--;
	while (i >= 0 && nptr[i] != '+' && nptr[i] != '-')
	{
		res += (nptr[i] - '0') * pow;
		a++;
		i--;
		pow *= 10;
		if (a == 10 && res < 0 && checker != 1)
			return (0);
	}
	if (checker != 0)
		res *= -1;
	if (a == 10 && res > 0 && checker == 1)
			return (0);
	return (res);
}

int		ft_atoi(const char *nptr)
{
	int		i;
	int		checker;

	checker = 0;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\v'
	|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\n')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			checker = 1;
		i++;
	}
	if (nptr[i] < '0' || nptr[i] > '9')
		return (0);
	return (return_atoi(nptr, i, checker));
}
