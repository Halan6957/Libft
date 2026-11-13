/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:10:53 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/13 10:40:30 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*s);

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen((char *)s) + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_strdup(argv[1]));
	return (0);
}
*/
