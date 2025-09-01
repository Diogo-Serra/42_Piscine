/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 01:01:12 by diserra           #+#    #+#             */
/*   Updated: 2025/08/27 01:36:00 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int		digit;
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

int	*ft_range(int min, int max)
{
	int	*range;
	int	len;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	len = (max - min);
	range = malloc(len * sizeof(int));
	if (!range)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int len;
	int	i;
	int *range;
	int	max = 10;
	int	min = 1;

	range = ft_range(min, max);
	len = max - min;
	i = 0;
	while (i < len)
	{
		ft_putnbr(range[i]);
		i++;
	}
	write(1, "\n", 1);
	free(range);
	return (0);
}*/
