/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:24:19 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/19 12:43:23 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*mem;

	if (size == 0)
		return (malloc(0));
	if (nmemb > 2147483647 / size)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	if (nmemb == 0)
		return ((void *)mem);
	i = 0;
	while (i < nmemb * size)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
