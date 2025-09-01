/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 02:29:36 by diserra           #+#    #+#             */
/*   Updated: 2025/08/27 04:15:20 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	return (str1);
}

int	ft_total_len(char **strs, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i ++;
	}
	return (len);
}

static char	*ft_alloc_empty(void)
{
	char	*s;

	s = malloc(1);
	if (!s)
		return (NULL);
	s[0] = '\0';
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	if (size <= 0)
		return (ft_alloc_empty());
	dest = malloc((ft_total_len(strs, size) + ft_strlen(sep) * (size - 1) + 1));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	i = 0;
	while (i < size - 1)
	{
		dest = ft_strcat(dest, strs[i]);
		dest = ft_strcat(dest, sep);
		i++;
	}
	ft_strcat(dest, strs[i]);
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char	*dest;
	char	sep[] = "_ _";
	int		size;

	if (argc < 2)
	{
		printf("Need more Arguments");
		return (1);
	}
	size = argc - 1;
	dest = ft_strjoin(size, &argv[1], sep);
	printf("%s\n", dest);
	free(dest);
	return (0);
}*/
