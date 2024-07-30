#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str);
void	ft_display_file(char *filename);

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_display_file(argv[1]);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[4096];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	while (1)
	{
		bytes_read = read(fd, buffer, 4096);
		if (bytes_read <= 0)
			break ;
		write(1, buffer, bytes_read);
	}
	close(fd);
}

