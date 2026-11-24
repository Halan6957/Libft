/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 08:30:23 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 14:34:09 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*c1;
	const unsigned char	*c2;

	if (n == 0)
		return (0);
	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	i = 0;
	while (i + 1 < n && c1[i] == c2[i])
		i++;
	return ((int)c1[i] - (int)c2[i]);
}
/*
The  ft_memchr()  function  scans the initial n bytes of the memory area pointed
to by s for the first instance of c. Both c and the bytes of the memory area 
pointed to by s are interpreted as unsigned char.
*/
