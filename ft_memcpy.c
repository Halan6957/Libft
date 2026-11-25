/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:38:08 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/25 13:47:35 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}

/*
The memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap. Use memmove(3) if the memory areas do overlap.
*/
/*
#include <stdio.h>

int	main(void)
{
	int	arraysrc[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	arraydest[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	
	int	i;

	i = 0;

	while (i < 10)
	{
		printf("%i\n", arraysrc[i]);
		i ++;
	}
	
	i = 0;
	ft_memcpy(arraydest, arraysrc, sizeof(int)*5);
	while ( i < 10)
	{
		printf("%i\n", arraydest[i]);
		i++;
	}
	return (0);
}

*/
