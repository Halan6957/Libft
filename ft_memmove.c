/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 07:32:08 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/25 11:51:06 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	if (src < dest)
	{
		while (0 < n--)
			ptrdest[n] = ptrsrc[n];
	}
	return (dest);
}

/*The  ft_memmove()  function copies n bytes from memory area src to memory
area dest.  The memory areas may overlap.
*/
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'};
	char	*dest;

	dest = src + 2;
	printf("source : %s\ndest : %s\n", src, dest);
	ft_memmove(dest, src, 4);
	printf("\nMemmove\nsource : %s\ndest : %s\n", src, dest);
	return (0);
}
*/