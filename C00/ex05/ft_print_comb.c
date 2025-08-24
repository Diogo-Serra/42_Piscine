/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 02:01:39 by diserra           #+#    #+#             */
/*   Updated: 2025/08/24 02:56:12 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putspnbr(int nbr)
{
	char	digit;

	digit = (nbr % 10) + '0';
	write (1, &digit, 1);
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putspnbr(a);
				ft_putspnbr(b);
				ft_putspnbr(c);
				if (a == 7 && b == 8 && c == 9)
					return ;
				write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
