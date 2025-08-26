/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:35:13 by diserra           #+#    #+#             */
/*   Updated: 2025/08/25 21:42:27 by diserra          ###   ########.fr       */
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

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	ft_recursive_power(5, 5);
	return (0);
}*/
