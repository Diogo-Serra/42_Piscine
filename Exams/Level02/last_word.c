/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 02:16:14 by diserra           #+#    #+#             */
/*   Updated: 2025/09/02 02:33:41 by diserra          ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	len;

	len = ft_strlen(argv[1]);
	if (argc == 2)
	{
		while (argv[1][len - 1] == ' '
			|| (argv[1][len - 1] >= 9 && argv[1][len - 1] <= 13))
			len--;
		while (argv[1][len - 1] && !(argv[1][len - 1] == ' ' ||
			(argv[1][len - 1] >= 9 && argv[1][len - 1] <= 13)))
			len--;
		len++;
		while (argv[1][len - 1])
		{
			write(1, &argv[1][len - 1], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
