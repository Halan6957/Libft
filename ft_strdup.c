/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:10:53 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/25 13:42:17 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char	*s);

char	*ft_strdup(const char *s)
{
	char		*dest;
	size_t		i;

	i = 0;
	dest = malloc(ft_strlen((const char *)s) + 1);
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
The ft_strdup() function returns a pointer to a new string which is a duplicate
of the string s.  Memory for the new string is obtained with malloc(3),
and can be freed with free(3).
*/
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_strdup(argv[1]));
	return (0);
}
*/
