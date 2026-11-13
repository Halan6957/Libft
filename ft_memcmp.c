/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 08:30:23 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/12 14:31:39 by ahautefe         ###   ########lyon.fr   */
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
