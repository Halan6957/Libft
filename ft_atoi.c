/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:08:04 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/24 12:17:34 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_atoi(const char *nptr)
{
	long				nbr;
	size_t				i;
	int					sign;

	nbr = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			sign = sign * -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = (nbr * 10) + (nptr[i] - '0');
		i++;
	}
	return ((int)(nbr * sign));
}

//The ft_atoi() function converts the initial portion of the string pointed to
// by nptr to int.

/*

#include <stdlib.h>
#include <stdio.h>

void	test_atoi(char *str)
{
	printf("\nTest %s :", str);
	printf("\nft_atoi : %i", ft_atoi(str));
	printf("\natoi :\t  %i\n\n", atoi(str));
}

int	main(void)
{
	test_atoi("0");
	test_atoi("42");
	test_atoi("-42");
	test_atoi("+42");

	test_atoi("--42");
	test_atoi("++42");
	test_atoi("-+42");
	test_atoi("+-42");
	test_atoi("- 42");

	test_atoi("42abc99");
	test_atoi("abc42");
	test_atoi("");
	test_atoi("   ");

	test_atoi("2147483647");
	test_atoi("-2147483648");	
}
*/