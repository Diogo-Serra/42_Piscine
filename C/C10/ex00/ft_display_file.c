/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:29:18 by diserra           #+#    #+#             */
/*   Updated: 2025/09/15 17:29:38 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /* read, write, close */
#include <fcntl.h>  /* open */

#define BUF_SIZE 4096

static void	putstr_fd(const char *s, int fd)
{
	while (*s)
	{
		if (write(fd, s, 1) < 0)
			return ;
		s++;
	}
}

static int	write_all(int fd, const char *buf, ssize_t len)
{
	ssize_t off;
	ssize_t w;

	off = 0;
	while (off < len)
	{
		w = write(fd, buf + off, (size_t)(len - off));
		if (w < 0)
			return (-1);
		off += w;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	ssize_t	r;
	char	buf[BUF_SIZE];

	if (argc < 2)
	{
		putstr_fd("File name missing.\n", 2);
		return (1);
	}
	if (argc > 2)
	{
		putstr_fd("Too many arguments.\n", 2);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		putstr_fd("Cannot read file.\n", 2);
		return (1);
	}
	while ((r = read(fd, buf, BUF_SIZE)) > 0)
	{
		if (write_all(1, buf, r) < 0)
		{
			putstr_fd("Cannot read file.\n", 2);
			close(fd);
			return (1);
		}
	}
	if (r < 0)
	{
		putstr_fd("Cannot read file.\n", 2);
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}