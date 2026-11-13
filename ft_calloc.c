/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:24:19 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/13 11:19:06 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*mem;

	if (nmemb * size > 2147483647)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	if (size == 0 || nmemb == 0)
		return ((void *)mem);
	i = 0;
	while (i < nmemb * size)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
