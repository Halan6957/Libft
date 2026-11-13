/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:36:23 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/12 14:36:11 by ahautefe         ###   ########lyon.fr   */
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
