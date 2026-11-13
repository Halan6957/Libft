/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:19:35 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/12 14:32:41 by ahautefe         ###   ########lyon.fr   */
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

int     main(void)
{
        int  array[20];
        int     i;

        i = 0;

        while (i < 20)
        {
                array[i] = i;
                printf("%i\n", array[i]);
                i ++;
        }

        ft_bzero(array, sizeof(int)*10);
        i = 0;
        while ( i < 20)
        {
                printf("%i\n", array[i]);
                i++;
        }
        return (0);
}
*/
