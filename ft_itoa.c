/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:18:08 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/17 13:24:50 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int	count_digit(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count ++;
	if (n < 10 && n > -10)
	{
		count++;
		return (count);
	}
	while (n / 10)
	{
		n = n / 10;
		count ++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	int		n_len;
	int		sign;
	char	*result;

	n_len = count_digit(n);
	result = malloc(n_len + 1);
	if (!result)
		return (NULL);
	sign = 1;
	if (n < 0)
		sign = -1;
	result[n_len] = '\0';
	while (n_len > 0)
	{
		result[n_len - 1] = (n % 10) * sign + '0';
		n_len--;
		if (n < 0 && n > -10 && n_len == 1)
		{
			result[n_len - 1] = '-';
			n_len--;
		}
		n = n / 10;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%s\n\n", ft_itoa(123456));
	printf("%s\n\n", ft_itoa(-456));
	printf("%s\n\n", ft_itoa(-6));
	printf("%s\n\n", ft_itoa(0));
	printf("%s\n\n", ft_itoa(10));
	printf("%s\n\n", ft_itoa(000123456));
	printf("%s\n\n", ft_itoa(-0));
	return (0);
}
*/