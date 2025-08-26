/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:24:12 by diserra           #+#    #+#             */
/*   Updated: 2025/08/25 21:34:37 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long	digit;
	char	c;

	digit = nbr;
	if (digit < 0)
	{
		write(1, "-", 1);
		digit = -digit;
	}
	if (digit >= 10)
	{
		ft_putnbr(digit / 10);
	}
	c = (digit % 10) + '0';
	write(1, &c, 1);
}

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	int result = ft_iterative_power(2, 3);
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}*/
