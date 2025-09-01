/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:30:13 by diserra           #+#    #+#             */
/*   Updated: 2025/09/01 15:36:18 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	digit;
	char	c;

	digit = nb;
	if (digit < 0)
	{
		write(1, "-", 1);
		digit = -digit;
	}
	if (digit >= 10)
		ft_putnbr(digit / 10);
	c = (digit % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	digit;

	digit = 1;
	while (digit <= 100)
	{
		if (digit % 3 == 0 && digit % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (digit % 3 == 0 && digit % 5 != 0)
			write(1, "fizz", 4);
		else if (digit % 5 == 0 && digit % 3 != 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(digit);
		write(1, "\n", 1);
		digit++;
	}
	return (0);
}
