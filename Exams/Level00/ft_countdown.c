/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 00:23:10 by diserra           #+#    #+#             */
/*   Updated: 2025/09/01 00:56:15 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = '9';
	while (a >= '0')
	{
		write(1, &a, 1);
		a--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
