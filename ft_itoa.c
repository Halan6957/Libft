/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:18:08 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/23 14:41:55 by ahautefe         ###   ########.fr       */
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
#include <stdio.h>

void	test_itoa(int n)
{
	printf("\nTest %i :", n);
	printf("\nft_itoa : %s", ft_itoa(n));
}

int	main(void)
{
	test_itoa(0);
	test_itoa(42);
	test_itoa(-42);
	test_itoa(1000);
	test_itoa(-1);

	test_itoa(2147483647);
	test_itoa(-2147483648);	
}
*/