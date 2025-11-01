/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:29:18 by diserra           #+#    #+#             */
/*   Updated: 2025/11/01 01:21:42 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /* read, write, close */
#include <fcntl.h>  /* open */

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
	ssize_t	off;
	ssize_t	w;

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

static int	display_fd(int fd)
{
	ssize_t	r;
	char	buf[4096];

	r = read(fd, buf, 4096);
	while (r > 0)
	{
		if (write_all(1, buf, r) < 0)
			return (-1);
		r = read(fd, buf, 4096);
	}
	if (r < 0)
		return (-1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc < 2)
		return (putstr_fd("File name missing.\n", 2), 1);
	if (argc > 2)
		return (putstr_fd("Too many arguments.\n", 2), 1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (putstr_fd("Cannot read file.\n", 2), 1);
	if (display_fd(fd) < 0)
		return (close(fd), putstr_fd("Cannot read file.\n", 2), 1);
	close(fd);
	return (0);
}
