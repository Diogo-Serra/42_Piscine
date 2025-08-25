/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:43:29 by diserra           #+#    #+#             */
/*   Updated: 2025/08/25 15:47:28 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	if (!is_valid_base(base))
		return ;
	nb = nbr;
	base_len = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}
