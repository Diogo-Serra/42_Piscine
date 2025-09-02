/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 00:53:42 by diserra           #+#    #+#             */
/*   Updated: 2025/09/02 01:07:13 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'M')
			|| (str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z')
			|| (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		i++;
	}
	ft_putstr(str);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rot_13(argv[1]);
	}
	return (0);
}
