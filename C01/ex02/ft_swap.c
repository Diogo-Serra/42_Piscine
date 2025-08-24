/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:55:35 by diserra           #+#    #+#             */
/*   Updated: 2025/08/24 19:02:22 by diserra          ###   ########.fr       */
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

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;
	ft_putnbr(a);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putnbr(b);
	write(1, "\n", 1);
}*/
