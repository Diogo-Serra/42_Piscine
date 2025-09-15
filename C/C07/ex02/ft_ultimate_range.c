/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 01:37:44 by diserra           #+#    #+#             */
/*   Updated: 2025/09/15 18:44:36 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	min = 1;
	int	max = 10;
	int	result;

	result = ft_ultimate_range(&range, min, max);
	ft_putnbr(result);
	return (0);
}*/
