/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:21:41 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/27 08:36:59 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*substr;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		len = 0;
		substr = malloc(1);
	}
	else if (len < s_len - start)
		substr = malloc(len + 1);
	else
		substr = malloc(s_len - start + 1);
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len && i < s_len - start)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}
/*
Allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’.
*/
/*
#include <stdio.h>
int main(void)
{
	char const *s;
	unsigned int    start;
	size_t  len;

	s = "MAHRASETEST";
	start = 20;
	len = 20;

	printf("%s %i %zu\n", s, start, len);
	printf("%s\n", ft_substr(s, start, len));

	return (0);
}
*/