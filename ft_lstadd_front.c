/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:59:20 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 12:18:27 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*

//Add the node 'new' att the beginning of the list.

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
	ft_lstadd_front(&start_list, new_node1);
	ft_print_list(start_list);

	printf("\n\nTest add on non-empty list\n");
	new_node2 = ft_lstnew("Second node");
	ft_lstadd_front(&start_list, new_node2);
	ft_print_list(start_list);

	printf("\n\nTests NULL\n");
	ft_lstadd_front(NULL, new_node1);
	ft_lstadd_front(&start_list, NULL);
	ft_print_list(start_list);
}
*/