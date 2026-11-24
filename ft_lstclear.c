/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 12:00:00 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 12:19:31 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_address;

	if (!lst || !*lst || !del)
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

/*
Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL.
*/

/*
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
size_t	ft_strlen(const char	*s);
char	*ft_strdup(const char *s);

static void del	(void *content)
{
	free(content);
}

static void	ft_print_list(t_list *lst)
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

	printf("\n\nTest on empty list\n");
	ft_lstclear(&start_list, del);
	ft_print_list(start_list);

	printf("\nCreate list\n");
	new_node1 = ft_lstnew(ft_strdup("First node"));
	new_node2 = ft_lstnew(ft_strdup("Node 2"));
	ft_lstadd_back(&start_list, new_node1);
	ft_lstadd_back(&start_list, new_node2);
	ft_print_list(start_list);

	printf("\n\nTest add on non-empty list\n");
	ft_lstclear(&start_list, del);
	ft_print_list(start_list);

	printf("\n\nTests NULL\n");
	new_node1 = ft_lstnew(ft_strdup("First node"));
	new_node2 = ft_lstnew(ft_strdup("Node 2"));
	ft_lstadd_back(&start_list, new_node1);
	ft_lstadd_back(&start_list, new_node2);
	ft_print_list(start_list);
	ft_lstclear(NULL, del);
	ft_lstclear(&start_list, NULL);

	ft_print_list(start_list);

	return (0);
}
*/