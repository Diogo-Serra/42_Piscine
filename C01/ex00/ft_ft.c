/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:41:05 by diserra           #+#    #+#             */
/*   Updated: 2025/08/24 18:53:23 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
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
}*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	nbr;

	nbr = 0;
	ft_putnbr(nbr);
	write(1, "\n", 1);
	ft_ft(&nbr);
	ft_putnbr(nbr);
	write(1, "\n", 1);
	return (0);
}*/
