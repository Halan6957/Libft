/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:10:10 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 14:09:28 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i ++;
	}
	return (s);
}

/*The ft_memset() function fills the first n bytes of the memory area
pointed to by s with the constant byte c.
*/
/*
#include <stdio.h>

int	main(void)
{
	int  array[20];
	int	i;

	i = 0;

	while (i < 20)
	{
		array[i] = i;
		printf("%i\n", array[i]);
		i ++;
	}

	ft_memset(array, 0, 22);
	i = 0;
	while ( i < 20)
	{
		printf("%i\n", array[i]);
		i++;
	}
	return (0);
}
*/
