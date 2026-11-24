/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:48:31 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 14:16:06 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i ++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	ft_free_alloc_words(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	ft_alloc_words(char **tab, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	while (s[i])
	{
		length = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + length] && s[i + length] != c)
			length++;
		if (length != 0)
		{
			tab[j] = malloc(length + 1);
			if (!tab[j])
				return (-1);
			j++;
		}
		i = i + length;
	}
	tab[j] = NULL;
	return (0);
}

static void	ft_copy_words(char **tab, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			tab[k][j] = s[i];
			i++;
			j++;
		}
		if (j != 0)
		{
			tab[k][j] = '\0';
			j = 0;
			k++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	if (ft_alloc_words(tab, s, c) == -1)
	{
		ft_free_alloc_words(tab);
		return (NULL);
	}
	ft_copy_words(tab, s, c);
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	int		i;
	char	**tab;

	tab = ft_split(argv[1], argv[2][0]);
	i = 0;

	printf("%zu\n", ft_count_words(argv[1], argv[2][0]));
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
*/
