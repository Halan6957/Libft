/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:02:54 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 16:21:10 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*s);

int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (c != set[i] && set[i] != '\0')
		i++;
	if (set[i] == '\0')
		return (0);
	if (set [i] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*strtrim;

	i = -1;
	start = 0;
	while (s1[++i] && is_in_set(s1[i], set) == 1)
		start ++;
	end = ft_strlen((char *)s1);
	while (end > start && is_in_set(s1[end -1], set) == 1)
		end--;
	strtrim = malloc(end - start + 1);
	if (!strtrim)
		return (NULL);
	i = -1;
	while (++i < end - start)
		strtrim[i] = s1[start + i];
	strtrim[i] = '\0';
	return (strtrim);
}
/*
Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.
*/
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "     qweerty   ";
	set = " ";
	printf("%s\n%s\n", s1, set);
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
*/
