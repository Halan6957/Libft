/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 08:44:12 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/12 14:59:12 by ahautefe         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	source[] = "SOURC  E";
	char	destination[] = "DESTINATION";
	unsigned int	size = 6;

	//strlcpy(destination, source, size);

	printf("%d\n%s\n", strlcpy(destination, source, size), destination);
	return (0);	
}
*/
