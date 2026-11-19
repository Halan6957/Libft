/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 12:00:00 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/19 13:37:31 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (del)(void *))
{
	t_list	*node_address;

	if (!lst || !*lst)
		return ;
	while ((*lst)->next)
	{
		node_address = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node_address;
	}
	if (*lst)
	{
		del((*lst)->content);
		free(*lst);
		*lst = NULL;
	}
}
