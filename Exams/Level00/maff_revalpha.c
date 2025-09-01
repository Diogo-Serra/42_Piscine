/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 00:49:46 by diserra           #+#    #+#             */
/*   Updated: 2025/09/01 00:50:37 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_alpha(void)
{
	char	c;
	int		count;

	c = 'z';
	count = 1;
	while (c >= 'a')
	{
		if (count % 2 == 0)
		{
			c -= 32;
			write(1, &c, 1);
			c += 32;
		}
		if (count % 2 != 0)
			write(1, &c, 1);
		c--;
		count++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	maff_alpha();
	return (0);
}
