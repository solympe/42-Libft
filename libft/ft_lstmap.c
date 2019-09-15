/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <solympe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:52:34 by solympe           #+#    #+#             */
/*   Updated: 2019/09/14 19:03:11 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*saver;
	t_list	*newl;

	newl = f(lst);
	if (lst == NULL)
		return (NULL);
	saver = newl;
	while (lst->next)
	{
		lst = lst->next;
		saver->next = f(lst);
		if (saver->next == NULL)
			return (NULL);
		saver = saver->next;
	}
	return (newl);
}
