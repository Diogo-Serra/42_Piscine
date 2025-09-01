/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 22:15:02 by diserra           #+#    #+#             */
/*   Updated: 2025/08/24 23:25:53 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	if (c == 32 || (c >= 43 && c <= 46))
		return (3);
	if (c >= '0' && c <= '9')
		return (0);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;
	int	is_alpha;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		is_alpha = ft_is_alpha(str[i]);
		if (is_alpha == 3)
			new_word = 1;
		else if (new_word != 0)
		{
			if (is_alpha == 1)
				str[i] -= 32;
			new_word = 0;
		}
		else
		{
			if (is_alpha == 2)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Teste teste";
	ft_strcapitalize(str);
	ft_putstr(str);
	return (0);
}*/
