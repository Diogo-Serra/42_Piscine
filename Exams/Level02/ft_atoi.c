/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:42:13 by diserra           #+#    #+#             */
/*   Updated: 2025/09/02 15:23:29 by diserra          ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	if (!str)
		return (0);
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

int	main(void)
{
	int	result;

	result = ft_atoi("  -4242");
	ft_putnbr(result);
	return (0);
}
