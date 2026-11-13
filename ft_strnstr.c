/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:06:13 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/12 14:29:44 by ahautefe         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)&big[i]);
	while (big[i] != '\0' && i + j < len)
	{
		j = 0;
		while (little[j] != '\0')
		{
			if (i + j >= len || little[j] != big[i + j])
				break ;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
