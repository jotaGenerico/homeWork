#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void		ft_putstr_fd(int fd, char *str);
void		ft_putnbr_fd(int fd, int n);
void		ft_handle_error(char *filename);
void		ft_tail_file(int fd, long long n);
long long	ft_atoll(char *str);

int	main(int argc, char **argv)
{
	int			fd;
	long long	n;

	if (argc < 3 || argv[1][0] != '-' || argv[1][1] != 'c')
	{
		ft_putstr_fd(2, "Usage: ./ft_tail -c number [file ...]\n");
		return (1);
	}
	n = ft_atoll(argv[2]);
	if (n < 0)
	{
		ft_putstr_fd(2, "ft_tail: illegal offset -- ");
		ft_putstr_fd(2, argv[2]);
		ft_putstr_fd(2, "\n");
		return (1);
	}
	if (argc == 3)
		ft_tail_file(0, n);
	else
	{
		fd = open(argv[3], O_RDONLY);
		if (fd < 0)
			ft_handle_error(argv[3]);
		else
		{
			ft_tail_file(fd, n);
			close(fd);
		}
	}
	return (0);
}

void	ft_putstr_fd(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_putnbr_fd(int fd, int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr_fd(fd, n / 10);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

void	ft_handle_error(char *filename)
{
	ft_putstr_fd(2, "ft_tail: ");
	ft_putstr_fd(2, filename);
	ft_putstr_fd(2, ": ");
	ft_putstr_fd(2, strerror(errno));
	ft_putstr_fd(2, "\n");
}

void	ft_tail_file(int fd, long long n)
{
	char		buffer[BUFFER_SIZE];
	long long	file_size;
	long long	bytes_read;
	long long	offset;

	file_size = lseek(fd, 0, SEEK_END);
	if (file_size < 0)
	{
		ft_handle_error("lseek");
		return ;
	}
	if (file_size > n)
		offset = file_size - n;
	else
		offset = 0;
	lseek(fd, offset, SEEK_SET);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
		write(1, buffer, bytes_read);
	if (bytes_read < 0)
		ft_handle_error("read");
}

long long	ft_atoll(char *str)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
