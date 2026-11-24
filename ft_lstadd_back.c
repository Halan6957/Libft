/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:33:20 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 12:17:30 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node_address;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	node_address = *lst;
	while (node_address->next)
		node_address = node_address->next;
	node_address->next = new;
}

//Add the node 'new' at the end of the list.
/*
#include <stdio.h>

t_list	*ft_lstnew(void *content);

void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL");

}
int	main(void)
{
	t_list	*start_list;
	t_list	*new_node1;
	t_list	*new_node2;

	start_list = NULL;

	printf("\nTest add first node on empty list\n");
	new_node1 = ft_lstnew("First node");
	ft_lstadd_back(&start_list, new_node1);
	ft_print_list(start_list);

	printf("\n\nTest add on non-empty list\n");
	new_node2 = ft_lstnew("Second node");
	ft_lstadd_back(&start_list, new_node2);
	ft_print_list(start_list);

	printf("\n\nTests NULL\n");
	ft_lstadd_back(NULL, new_node1);
	ft_lstadd_back(&start_list, NULL);
	ft_print_list(start_list);

	return (0);
}

*/