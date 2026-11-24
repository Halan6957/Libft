/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:24:19 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 12:30:08 by ahautefe         ###   ########.fr       */
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

/*
The  ft_calloc()  function  allocates memory for an array of nmemb elements of
	size bytes each and returns a pointer to the allocated memory. The memory is
	set to zero. If nmemb or size is 0,then ft_calloc() returns a unique
	pointer value that can later be successfully passed to free(). If the
	multiplication of nmemb and size would result in integer overflow,  then
	calloc() returns NULL.
*/

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