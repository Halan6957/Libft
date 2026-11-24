/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:05:54 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 16:08:58 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
The strlen() function calculates the length of the string pointed to by s,
excluding the terminating null byte ('\0').
*/