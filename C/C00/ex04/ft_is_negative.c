/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 01:52:02 by diserra           #+#    #+#             */
/*   Updated: 2025/08/24 02:55:17 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N\n", 2);
		return ;
	}
	write(1, "P\n", 2);
}
/*
int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	if (argc <= 1)
	{
		write(1, "No Arguments", 13);
	}
	while (index < argc)
	{
		ft_is_negative(argv[index][0]);
		index++;
	}
	return (0);
}*/
