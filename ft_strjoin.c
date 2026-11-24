/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:09:08 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 08:53:47 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new_s;

	new_s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_s)
		return (NULL);
	i = -1;
	while (s1[++i])
		new_s[i] = s1[i];
	j = -1;
	while (s2[++j])
		new_s[i + j] = s2[j];
	new_s[i + j] = '\0';
	return (new_s);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*s1;
	const char	*s2;

	s1 = "Ma ";
	s2 = "phrase.";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/
