/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:47:53 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/30 13:47:58 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void	ft_putstr(int fd, char *str);
void	ft_handle_error(char *filename);
void	ft_cat_file(int fd);
void	ft_putnbr(int fd, int n);

#define BUFFER_SIZE 30000

int	main(int argc, char **argv)
{
	int	fd;
	int	i;

	if (argc == 1)
		ft_cat_file(0);
	else
	{
		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
				ft_handle_error(argv[i]);
			else
			{
				ft_cat_file(fd);
				close(fd);
			}
			i++;
		}
	}
	return (0);
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_putnbr(int fd, int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(fd, n / 10);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

void	ft_handle_error(char *filename)
{
	ft_putstr(2, "ft_cat: ");
	ft_putstr(2, filename);
	ft_putstr(2, ": Error number ");
	ft_putnbr(2, errno);
	ft_putstr(2, "\n");
}

void	ft_cat_file(int fd)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read < 0)
		ft_handle_error("read");
}
