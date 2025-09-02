/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:49:54 by diserra           #+#    #+#             */
/*   Updated: 2025/09/02 16:32:10 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		len;
	int		ind;
	char	temp;

	len = ft_strlen(str) - 1;
	ind = 0;
	while (ind < len)
	{
		temp = str[ind];
		str[ind] = str[len];
		str[len] = temp;
		ind++;
		len--;
	}
	return (str);
}

int	main(void)
{
	char	source[] = "Hello";
	char	*dest;

	dest = ft_strrev(source);
	ft_putstr(dest);
	write(1, "\n", 1);
	return (0);
}
