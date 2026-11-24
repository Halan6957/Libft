/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 11:31:28 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 11:06:05 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Takes a node as parameter and frees its content using the function ’del’.
#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
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
	ft_lstdelone(start_list, del);
	ft_print_list(start_list);
	printf("\n");

	printf("\nCreate list\n");
	new_node1 = ft_lstnew(ft_strdup("First node"));
	new_node2 = ft_lstnew(ft_strdup("Node 2"));
	ft_lstadd_back(&start_list, new_node1);
	ft_lstadd_back(&start_list, new_node2);
	ft_print_list(start_list);

	printf("\n\nTest add on non-empty list\n");
	ft_lstdelone(new_node2, del);
	ft_print_list(start_list);

	printf("\n\nTests NULL\n");
	new_node1 = ft_lstnew(ft_strdup("First node"));
	new_node2 = ft_lstnew(ft_strdup("Node 2"));
	ft_lstadd_back(&start_list, new_node1);
	ft_lstadd_back(&start_list, new_node2);
	ft_print_list(start_list);
	ft_lstdelone(NULL, del);
	ft_lstdelone(start_list, NULL);

	ft_print_list(start_list);

	return (0);
}
*/