/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:13:11 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/23 08:30:12 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list		*new_node;
	char		content[] = "coucou"; // test NULL OK

	new_node = ft_lstnew(&content);

	printf("%s\n", (char *)new_node->content);
}
*/
