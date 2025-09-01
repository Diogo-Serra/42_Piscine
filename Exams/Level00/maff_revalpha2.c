/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 00:51:03 by diserra           #+#    #+#             */
/*   Updated: 2025/09/01 00:52:04 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_revalpha2(void)
{
	char	c;
	int		count;

	c = 'z';
	count = 1;
	while (c >= 'a')
	{
		if (count % 2 != 0)
		{
			c -= 32;
			write(1, &c, 1);
			c += 32;
		}
		if (count % 2 == 0)
			write(1, &c, 1);
		c--;
		count++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	maff_revalpha2();
	return (0);
}
