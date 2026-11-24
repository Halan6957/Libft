/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:24:19 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 10:14:23 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*mem;

	if (size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
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

//calloc fait exactement comme malloc, mais remplit toute la memoire 
//	allouee avec des 0.

/*
#include <stdio.h>

int	main(void)
{
	size_t	i, nmemb, size;
	char *ptr = NULL;
	i = 0;
	nmemb = 54;
	size = sizeof(*ptr)*10;

	ptr = ft_calloc(nmemb, size);

	while (i < nmemb * size)
	{
		if (ptr[i] != 0)
		{
			printf("KO");
			return (0);
		}
		if (ptr[i] == 0)
			i++;
		if (i == nmemb * size)
			printf("test OK\n");
	}
	return (0);
}
*/