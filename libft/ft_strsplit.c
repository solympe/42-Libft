/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:11:14 by solympe           #+#    #+#             */
/*   Updated: 2019/09/13 13:33:18 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*return_word(const char *s, int ai, char c)
{
	char	*word;
	int		n;
	int		j;

	j = 0;
	n = ai;
	while (s[n] != c && s[n])
		n++;
	word = ft_strnew(n - ai);
	while (ai < n && s[ai])
	{
		word[j] = s[ai];
		j++;
		ai++;
	}
	return (word);
}

char	**make_array(const char *s, char c, int num, int ai)
{
	char	**arr;
	int		i;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * num);
	if (!arr)
		return (NULL);
	while (s[ai] && num != 0)
	{
		if (s[ai] != c && (s[ai - 1] == c || !s[ai - 1]))
		{
			arr[i] = return_word(s, ai, c);
			ai++;
			num--;
			i++;
		}
		ai++;
	}
	return (arr);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		num;
	int		ai;

	if (!s || !c)
		return (NULL);
	ai = 0;
	i = 0;
	num = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			num++;
		i++;
	}
	i = 0;
	arr = make_array(s, c, num, ai);
	return (arr);
}
