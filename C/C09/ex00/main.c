/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 01:08:07 by diserra           #+#    #+#             */
/*   Updated: 2025/08/28 01:21:21 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);
void	ft_swap(int *x, int *y);

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;
	ft_putchar('A');
	write(1, "\n", 1);
	ft_putstr("HelloWorld!");
	write(1, "\n", 1);
	int result = ft_strcmp("Hello", "Hella");
	printf("%d\n", result);
	int result2 = ft_strlen("Hello");
	printf("%d\n", result2);
	ft_swap(&a, &b);
	printf("%d%d\n", a, b);
}
