/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 09:19:52 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/18 10:17:07 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n >= -9 && n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		digit = n + '0';
		write(fd, &digit, 1);
	}
	if (n < -9 || n > 9)
	{
		digit = n % 10;
		n = n / 10;
		ft_putnbr_fd(n, fd);
		if (digit < 0)
			digit = digit * -1;
		digit = digit + '0';
		write(fd, &digit, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(123456, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-123456, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
}
*/
