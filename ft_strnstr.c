/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:06:13 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/25 14:03:10 by ahautefe         ###   ########.fr       */
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
	while (i + j < len && big[i])
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
/*
The strnstr() function locates the first occurrence of the null-terminated 
string little in the string big, where not more than len characters are searched.
Characters that appear after a ‘\0’ character are not searched.
  Since the strnstr() function is a FreeBSD specific API, it should only be 
  used when portability is not a concern.
*/