/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 03:17:58 by diserra           #+#    #+#             */
/*   Updated: 2025/08/24 03:28:01 by diserra          ###   ########.fr       */
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
		write (1, "-", 1);
		digit = -digit;
	}
	if (digit >= 10)
	{
		ft_putnbr(digit / 10);
	}
	c = (digit % 10) + '0';
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr(4);
	return (0);
}*/
