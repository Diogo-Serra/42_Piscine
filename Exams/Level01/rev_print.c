/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 00:34:55 by diserra           #+#    #+#             */
/*   Updated: 2025/09/02 00:52:19 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	main(int argc, char **argv)
{
	int		i;
	int		len;
	char	temp;

	len = ft_strlen(argv[1]);
	i = 0;
	if (argc == 2)
	{
		while (i < len / 2)
		{
			temp = argv[1][i];
			argv[1][i] = argv[1][len - 1];
			argv[1][len - 1] = temp;
			i++;
			len--;
		}
		ft_putstr(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
