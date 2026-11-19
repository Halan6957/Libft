/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:51:25 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/19 16:25:28 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);

//static unsigned int	ft_count_nodes(t_list *lst)
//{
//	unsigned int	count;
//
//	count = 1;
//	if (!lst)
//		return (NULL);
//	while (lst->next)
//	{
//		count ++;
//		lst = lst->next;
//	}
//	return (count);
//}

ft_lstmap	*ft_lstmap(t_list *lst, void *(f*)(void *), void (*del)(void *))
{
	t_list			**new_list;
	t_list			*new_node;

	if (!lst || !f || !del)
		return (NULL);
	//count = ft_count_nodes(lst);
	
	new_node = ft_lstnew(f(lst->content);
	new_node-next = lst->next;
	*new_list = new_node;
	if (lst->next)
	{
		while (lst->next)
		{
			lst = lst->next;
			ft_lstadd_back(t_list **new_list, ft_lstnew(f(lst->content)));
		}
		lst = lst->next;
		ft_lstadd_back(t_list **new_list, ft_lstnew(f(lst->content)));
		new_node-next = lst->next;
	}
	return (new_list);
}
