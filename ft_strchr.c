/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:19:32 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/12 15:02:12 by ahautefe         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	if (!s)
		return (NULL);
	while (*s != '\0' && *s != chr)
		s++;
	if (*s == chr)
		return ((char *)s);
	return (NULL);
}
