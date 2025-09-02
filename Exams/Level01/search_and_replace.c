/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 01:21:23 by diserra           #+#    #+#             */
/*   Updated: 2025/09/02 01:59:14 by diserra          ###   ########.fr       */
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

void	ft_search_and_replace(char *source, char search, char replace)
{
	int	i;

	i = 0;
	while (source[i])
	{
		if (source[i] == search)
			source[i] = replace;
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_search_and_replace(argv[1], argv[2][0], argv[3][0]);
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
