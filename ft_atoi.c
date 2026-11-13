/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:08:04 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/13 10:08:30 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long	nbr;
	int		i;
	int		sign;

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
