/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:36:23 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 13:34:05 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*mem;
	unsigned char		chr;

	i = 0;
	mem = (const unsigned char *)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (mem[i] == chr)
			return ((void *)&mem[i]);
		i++;
	}
	return (NULL);
}
/*
The  ft_memchr()  function  scans the initial n bytes of the memory area pointed
to by s for the first instance of c.  Both c and the bytes of the memory area
pointed to by s are interpreted as unsigned char.
*/