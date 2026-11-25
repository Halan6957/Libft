/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:01:21 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/25 11:58:41 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	chr;

	i = 0;
	chr = (char)c;
	while (s[i])
		i++;
	while (i >= 0 && s[i] != chr)
		i--;
	if (i >= 0 && s[i] == chr)
		return ((char *)&s[i]);
	return (NULL);
}
/*
The ft_strrchr() function returns a pointer to the last occurrence of the 
character c in the string s.
*/