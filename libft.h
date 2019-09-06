/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:15:16 by solympe           #+#    #+#             */
/*   Updated: 2019/09/06 18:33:01 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIBFT_H
#define LIBFT_LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *src);

#endif //LIBFT_LIBFT_H