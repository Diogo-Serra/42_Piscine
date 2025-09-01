/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 00:40:18 by diserra           #+#    #+#             */
/*   Updated: 2025/09/01 00:49:00 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_alpha2(void)
{
	char	c;
	int		count;

	c = 'a';
	count = 1;
	while (c <= 'z')
	{
		if (count % 2 != 0)
		{
			c -= 32;
			write(1, &c, 1);
			c += 32;
		}
		if (count % 2 == 0)
			write(1, &c, 1);
		c++;
		count++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	maff_alpha2();
	return (0);
}
