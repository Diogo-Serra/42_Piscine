/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:45:23 by diserra           #+#    #+#             */
/*   Updated: 2025/09/01 17:51:01 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnchar(char c, int times)
{
	int	i;

	i = 0;
	while (i < times)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	c;
	int		i;
	int		repeats;

	i = 0;
	while (argv[1][i])
	{
		c = argv[1][i];
		repeats = 1;
		if (c >= 'a' && c <= 'z')
			repeats = (c - 'a') + 1;
		else if (c >= 'A' && c <= 'Z')
			repeats = (c - 'A') + 1;
		putnchar(c, repeats);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
