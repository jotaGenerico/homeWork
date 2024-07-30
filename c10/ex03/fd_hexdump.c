#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 16

void	ft_putstr(int fd, char *str);
void	ft_puthex(int fd, unsigned char c);
void	ft_putchar_fd(int fd, char c);
void	ft_putnbr_hex(int fd, size_t n, int width);
void	ft_handle_error(char *filename);
void	ft_hexdump(int fd);
void	ft_print_line(unsigned char *buffer, size_t size, size_t offset);

int	main(int argc, char **argv)
{
	int	fd;

	if (argc < 2 || (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'C'))
		ft_hexdump(0);
	else if (argc == 3 && argv[1][0] == '-' && argv[1][1] == 'C')
	{
		fd = open(argv[2], O_RDONLY);
		if (fd < 0)
			ft_handle_error(argv[2]);
		else
		{
			ft_hexdump(fd);
			close(fd);
		}
	}
	else
	{
		ft_putstr(2, "Usage: ./ft_hexdump [-C] [file]\n");
		return (1);
	}
	return (0);
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_puthex(int fd, unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(fd, &hex[c / 16], 1);
	write(fd, &hex[c % 16], 1);
}

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putnbr_hex(int fd, size_t n, int width)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (width > 1)
		ft_putnbr_hex(fd, n / 16, width - 1);
	write(fd, &hex[n % 16], 1);
}

void	ft_handle_error(char *filename)
{
	ft_putstr(2, "ft_hexdump: ");
	ft_putstr(2, filename);
	ft_putstr(2, ": ");
	ft_putstr(2, strerror(errno));
	ft_putstr(2, "\n");
}

void	ft_hexdump(int fd)
{
	unsigned char	buffer[BUFFER_SIZE];
	ssize_t			bytes_read;
	size_t			total_bytes;

	total_bytes = 0;
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		ft_print_line(buffer, bytes_read, total_bytes);
		total_bytes += bytes_read;
	}
	if (bytes_read < 0)
		ft_handle_error("read");
	if (total_bytes > 0)
	{
		ft_putnbr_hex(1, total_bytes, 8);
		ft_putstr(1, "\n");
	}
}

void	ft_print_line(unsigned char *buffer, size_t size, size_t offset)
{
	size_t	i;

	ft_putnbr_hex(1, offset, 8);
	ft_putstr(1, "  ");
	i = 0;
	while (i < BUFFER_SIZE)
	{
		if (i < size)
			ft_puthex(1, buffer[i]);
		else
			ft_putstr(1, "  ");
		if (i % 2 == 1)
			ft_putchar_fd(1, ' ');
		if (i == 7)
			ft_putchar_fd(1, ' ');
		i++;
	}
	ft_putstr(1, " |");
	i = 0;
	while (i < size)
	{
		if (buffer[i] >= 32 && buffer[i] <= 126)
			ft_putchar_fd(1, buffer[i]);
		else
			ft_putchar_fd(1, '.');
		i++;
	}
	ft_putstr(1, "|\n");
}
