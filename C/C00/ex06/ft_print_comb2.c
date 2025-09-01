/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 02:57:21 by diserra           #+#    #+#             */
/*   Updated: 2025/08/24 03:16:54 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	digit;

	if (nbr >= 10)
	{
		digit = (nbr / 10) + '0';
		write(1, &digit, 1);
		digit = (nbr % 10) + '0';
		write(1, &digit, 1);
	}
	if (nbr < 10)
	{
		write(1, "0", 1);
		digit = (nbr % 10) + '0';
		write(1, &digit, 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnbr(a);
			write(1, " ", 1);
			ft_putnbr(b);
			if (a == 98 && b == 99)
			{
				return ;
			}
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
