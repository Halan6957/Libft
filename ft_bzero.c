/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:19:35 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/23 10:51:48 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*

#include <stdio.h>
#include <strings.h>

int	main(void)
{
	int	array[20];
	int	i;

	i = 0;

	while (i < 20)
	{
		array[i] = i;
		printf("%i\n", array[i]);
		i ++;
	}

	printf("\n");

	//bzero(array, sizeof(int)*10);
	ft_bzero(array, sizeof(int)*10);
	i = 0;
	while ( i < 20)
	{
		printf("%i\n", array[i]);
		i++;
	}

	bzero(array, sizeof(int)*10);
	return (0);
}
*/
