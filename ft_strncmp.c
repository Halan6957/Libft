/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:27:01 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 16:17:14 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n -1 && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
The ft_strncmp() function compares the first (at most) n bytes of the two
strings s1 and s2. The comparison is done using unsigned characters.
*/
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str1[] = "qwertr";
	const char	str2[] = "qw4tyy";
	
	printf("%d\n", ft_strncmp(str1, str2, 2));
	printf("%d\n", strncmp(str1, str2, 2));	
	
	
	return (0);

}
*/
